/* Module: vegas30k.dll
   Function: riff64_ValidateChunkHeader
   Address: 0102daa0
   Source: Ghidra pseudocode (migrated from analysis/ghidra/output/vegas30k.dll_analysis.txt)
*/


/* __stdcall riff64_ValidateChunkHeader,24 */

undefined4 riff64_ValidateChunkHeader(void)

{
  uint in_stack_00000014;
  uint in_stack_00000018;
  
                    /* 0x2daa0  1406  _riff64_ValidateChunkHeader@24 */
  if ((in_stack_00000014 & 7) != 0 || (in_stack_00000018 & 8) != 0) {
    return 0x8004e083;
  }
  if ((in_stack_00000014 == 0) && (in_stack_00000018 == 0)) {
    return 0x8004e082;
  }
  return 0;
}



