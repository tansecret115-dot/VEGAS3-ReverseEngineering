/* Module: vegas30k.dll
   Function: FUN_0115f370
   Address: 0115f370
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0115f370(int *param_1,int param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_3 == '\0') {
    iVar3 = *(int *)((int)param_1 + param_2 * 4 + 0x8d);
  }
  else {
    iVar3 = *(int *)((int)param_1 + param_2 * 4 + 0x9d);
    param_2 = param_2 + 0x10;
  }
  if (iVar3 == 0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x31;
    *(int *)(*param_1 + 0x18) = param_2;
    (**(code **)*param_1)(param_1);
  }
  if (*(char *)(iVar3 + 0x111) == '\0') {
    FUN_0115eea0(param_1,0xc4);
    iVar2 = 0;
    iVar1 = 1;
    do {
      iVar2 = iVar2 + (uint)*(byte *)(iVar1 + iVar3);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x11);
    FUN_0115eec0(param_1,iVar2 + 0x13);
    FUN_0115ee60(param_1,param_2);
    iVar1 = 1;
    do {
      FUN_0115ee60(param_1,*(undefined1 *)(iVar1 + iVar3));
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x11);
    iVar1 = 0;
    if (0 < iVar2) {
      do {
        FUN_0115ee60(param_1,*(undefined1 *)(iVar3 + 0x11 + iVar1));
        iVar1 = iVar1 + 1;
      } while (iVar1 < iVar2);
    }
    *(undefined1 *)(iVar3 + 0x111) = 1;
  }
  return;
}


