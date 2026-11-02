/* Module: vegas30k.dll
   Function: riff64_ReadListHeader
   Address: 0102e3e0
   Source: Ghidra pseudocode (migrated from analysis/ghidra/output/vegas30k.dll_analysis.txt)
*/


/* __stdcall riff64_ReadListHeader,12 */

uint riff64_ReadListHeader(undefined1 *param_1,LPVOID param_2,uint *param_3)

{
  uint uVar1;
  undefined1 *hFile;
  uint *puVar2;
  BOOL BVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  bool bVar7;
  int local_10 [4];
  
  hFile = param_1;
                    /* 0x2e3e0  1398  _riff64_ReadListHeader@12 */
  BVar3 = ReadFile(param_1,local_10,0x10,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
  puVar2 = param_3;
  if (BVar3 == 0) {
    return 0x8004e008;
  }
  if (param_1 != &DAT_00000010) {
    return 0x8004e008;
  }
  BVar3 = ReadFile(hFile,param_3,8,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
  if (BVar3 == 0) {
    return 0x8004e008;
  }
  if (param_1 != (undefined1 *)0x8) {
    return 0x8004e008;
  }
  uVar1 = *puVar2;
  *puVar2 = uVar1 - 0x18;
  puVar2[1] = (puVar2[1] - 1) + (uint)(0x17 < uVar1);
  iVar4 = 4;
  bVar7 = true;
  piVar5 = &DAT_011dbd80;
  piVar6 = local_10;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    bVar7 = *piVar5 == *piVar6;
    piVar5 = piVar5 + 1;
    piVar6 = piVar6 + 1;
  } while (bVar7);
  if (!bVar7) {
    return 0x8004e081;
  }
  uVar1 = *puVar2;
  *puVar2 = uVar1 - 0x10;
  puVar2[1] = (puVar2[1] - 1) + (uint)(0xf < uVar1);
  BVar3 = ReadFile(hFile,param_2,0x10,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
  if (BVar3 == 0) {
    return 0x8004e008;
  }
  return -(uint)(param_1 != &DAT_00000010) & 0x8004e008;
}



