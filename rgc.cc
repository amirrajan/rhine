#include "llvm/CodeGen/GCStrategy.h"
#include "llvm/CodeGen/GCMetadata.h"
#include "llvm/Support/Compiler.h"

using namespace llvm;

namespace {
	class LLVM_LIBRARY_VISIBILITY Rgc : public GCStrategy {
	public:
		Rgc() {
			UsesMetadata = true;
		}
	};
}

static GCRegistry::Add<Rgc> X("rhine", "Strategy");
