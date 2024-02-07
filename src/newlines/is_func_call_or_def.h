/**
 * @file is_func_call_or_def.h
 *
 * @author  Ben Gardner
 * @author  Guy Maurel
 * extract from newlines.cpp
 * @license GPL v2+
 */
#ifndef NEWLINES_IS_FUNC_CALL_OR_DEF_H_INCLUDED
#define NEWLINES_IS_FUNC_CALL_OR_DEF_H_INCLUDED

#include "chunk.h"


/**
 * Test if an opening brace is part of a function call or definition.
 */
bool is_func_call_or_def(Chunk *pc);


#endif /* NEWLINES_IS_FUNC_CALL_OR_DEF_H_INCLUDED */
