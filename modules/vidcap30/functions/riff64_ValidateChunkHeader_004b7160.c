/* Module: vidcap30.exe
   Function: riff64_ValidateChunkHeader
   Address: 004b7160
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall riff64_ValidateChunkHeader,24 */

undefined4 riff64_ValidateChunkHeader(void)

{
  uint in_stack_00000014;
  uint in_stack_00000018;
  
                    /* 0xb7160  767  _riff64_ValidateChunkHeader@24 */
  if ((in_stack_00000014 & 7) != 0 || (in_stack_00000018 & 8) != 0) {
    return 0x8004e083;
  }
  if ((in_stack_00000014 == 0) && (in_stack_00000018 == 0)) {
    return 0x8004e082;
  }
  return 0;
}


