/* Module: vegas30.exe
   Function: FUN_005e9860
   Address: 005e9860
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005e9860(undefined4 param_1,undefined4 param_2,int *param_3,int param_4,uint param_5,
                 int *param_6)

{
  int iVar1;
  uint uVar2;
  HGLOBAL pvVar3;
  int iVar4;
  uint uVar5;
  
  *param_6 = 0;
  if (param_4 != 0) {
    param_4 = 0;
    iVar4 = *param_3;
    if (0 < iVar4) {
      do {
        iVar1 = *(int *)(param_3[2] + param_4 * 4);
        if (*(LPCVOID *)(iVar1 + 0x24) != (LPCVOID)0x0) {
          pvVar3 = GlobalHandle(*(LPCVOID *)(iVar1 + 0x24));
          GlobalUnlock(pvVar3);
          pvVar3 = GlobalHandle(*(LPCVOID *)(iVar1 + 0x24));
          GlobalFree(pvVar3);
          *(undefined4 *)(iVar1 + 0x24) = 0;
        }
        if (*(LPCVOID *)(iVar1 + 0x28) != (LPCVOID)0x0) {
          pvVar3 = GlobalHandle(*(LPCVOID *)(iVar1 + 0x28));
          GlobalUnlock(pvVar3);
          pvVar3 = GlobalHandle(*(LPCVOID *)(iVar1 + 0x28));
          GlobalFree(pvVar3);
          *(undefined4 *)(iVar1 + 0x28) = 0;
        }
        param_4 = param_4 + 1;
      } while (param_4 < iVar4);
    }
  }
  iVar4 = _SfList_DeleteList_16(param_3,0,0xffffffff,0);
  uVar2 = param_5;
  if (((-1 < iVar4) && (param_5 != 0)) && (uVar5 = 0, param_5 != 0)) {
    do {
      iVar4 = FUN_005e9830(param_1,param_2,param_3,uVar5,&param_4);
      if (iVar4 < 0) {
        return;
      }
      *param_6 = *param_6 + param_4;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  return;
}


