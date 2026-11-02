/* Module: vidcap30.exe
   Function: FUN_0042e540
   Address: 0042e540
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0042e540(HANDLE param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  undefined4 local_18;
  undefined4 local_14;
  int local_10 [4];
  
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  SetFilePointer(param_1,0,(PLONG)0x0,0);
  iVar1 = riff64_ReadFileID(param_1,&local_18,local_10);
  if (iVar1 < 0) {
    return 0;
  }
  iVar1 = 4;
  bVar4 = true;
  piVar2 = &DAT_0058ad28;
  piVar3 = local_10;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *piVar2 == *piVar3;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (bVar4);
  if (!bVar4) {
    return 0;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = local_18;
    param_2[1] = local_14;
  }
  return 1;
}


