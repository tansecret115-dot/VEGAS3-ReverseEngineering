/* Module: vegas30k.dll
   Function: riff64_ReadChunkHeader
   Address: 0102e350
   Source: Ghidra pseudocode (migrated from analysis/ghidra/output/vegas30k.dll_analysis.txt)
*/


/* __stdcall riff64_ReadChunkHeader,12 */

undefined4 riff64_ReadChunkHeader(HANDLE param_1,undefined1 *param_2,uint *param_3)

{
  uint uVar1;
  uint *puVar2;
  BOOL BVar3;
  
                    /* 0x2e350  1393  _riff64_ReadChunkHeader@12 */
  BVar3 = ReadFile(param_1,param_2,0x10,(LPDWORD)&param_2,(LPOVERLAPPED)0x0);
  puVar2 = param_3;
  if (BVar3 == 0) {
    return 0x8004e008;
  }
  if (param_2 != &DAT_00000010) {
    return 0x8004e008;
  }
  BVar3 = ReadFile(param_1,param_3,8,(LPDWORD)&param_2,(LPOVERLAPPED)0x0);
  if (BVar3 == 0) {
    return 0x8004e008;
  }
  if (param_2 != (undefined1 *)0x8) {
    return 0x8004e008;
  }
  uVar1 = *puVar2;
  *puVar2 = uVar1 - 0x18;
  puVar2[1] = (puVar2[1] - 1) + (uint)(0x17 < uVar1);
  return 0;
}



