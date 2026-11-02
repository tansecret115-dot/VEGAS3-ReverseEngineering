/* Module: vegas30k.dll
   Function: riff64_Pad
   Address: 0102e090
   Source: Ghidra pseudocode (migrated from analysis/ghidra/output/vegas30k.dll_analysis.txt)
*/


/* __stdcall riff64_Pad,12 */

undefined4 riff64_Pad(HANDLE param_1,undefined4 param_2,undefined4 param_3)

{
  HANDLE hFile;
  uint uVar1;
  BOOL BVar2;
  uint3 in_ECX;
  int iVar3;
  int iVar4;
  undefined4 uStack_4;
  
                    /* 0x2e090  1390  _riff64_Pad@12 */
  hFile = param_1;
  uStack_4 = (uint)in_ECX;
  uVar1 = riff64_AmountWritten(param_1,param_2,param_3);
  if ((uVar1 & 7) != 0) {
    iVar4 = 0;
    iVar3 = 8 - (uVar1 & 7);
    if (0 < iVar3) {
      do {
        BVar2 = WriteFile(hFile,(LPCVOID)((int)&uStack_4 + 3),1,(LPDWORD)&param_1,(LPOVERLAPPED)0x0)
        ;
        if (BVar2 == 0) {
          return 0x8004e009;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar3);
    }
  }
  return 0;
}



