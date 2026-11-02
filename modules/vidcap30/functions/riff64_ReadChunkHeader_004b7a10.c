/* Module: vidcap30.exe
   Function: riff64_ReadChunkHeader
   Address: 004b7a10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall riff64_ReadChunkHeader,12 */

undefined4 riff64_ReadChunkHeader(HANDLE param_1,LPVOID param_2,uint *param_3)

{
  uint uVar1;
  uint *puVar2;
  BOOL BVar3;
  
                    /* 0xb7a10  754  _riff64_ReadChunkHeader@12 */
  BVar3 = ReadFile(param_1,param_2,0x10,(LPDWORD)&param_2,(LPOVERLAPPED)0x0);
  puVar2 = param_3;
  if (BVar3 == 0) {
    return 0x8004e008;
  }
  if (param_2 != (LPVOID)0x10) {
    return 0x8004e008;
  }
  BVar3 = ReadFile(param_1,param_3,8,(LPDWORD)&param_2,(LPOVERLAPPED)0x0);
  if (BVar3 == 0) {
    return 0x8004e008;
  }
  if (param_2 != (LPVOID)0x8) {
    return 0x8004e008;
  }
  uVar1 = *puVar2;
  *puVar2 = uVar1 - 0x18;
  puVar2[1] = (puVar2[1] - 1) + (uint)(0x17 < uVar1);
  return 0;
}


