#include <gtest/gtest.h>

#include <stdint.h>

#include "llvm/Support/MemoryBuffer.h"
#include "clang/Lex/Preprocessor.h"
#include "clang/Lex/Lexer.h"

#define STRING(a) #a

TEST(TestTest,Unit)
{
	const char source[]=STRING((
		int var=1;
		int func()
		{
			return var;
		}
		));


	clang::FileID fid;
	llvm::MemoryBuffer *mem_source=llvm::MemoryBuffer::getMemBuffer(source);
	clang::Preprocessor pp;

	clang::Lexer lexer(fid,mem_source,pp);

}

