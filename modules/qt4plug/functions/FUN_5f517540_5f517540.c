/* Module: qt4plug.dll
   Function: FUN_5f517540
   Address: 5f517540
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_5f517540(int param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13)

{
  SHORT SVar1;
  HGLOBAL pvVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  int *piVar6;
  bool bVar7;
  int local_38;
  LPVOID local_34;
  uint local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  piVar6 = &local_38;
  for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar6 = 0;
    piVar6 = piVar6 + 1;
  }
  local_38 = param_1;
  pvVar2 = GlobalAlloc(0x40,param_2 * 8);
  local_34 = GlobalLock(pvVar2);
  local_28 = param_4;
  local_24 = param_5;
  local_20 = param_6;
  local_1c = param_7;
  local_18 = param_8;
  local_14 = param_11;
  local_30 = param_2;
  local_2c = param_3;
  local_10 = param_12;
  local_c = param_13;
  local_8 = 0;
  local_4 = 0x3ff00000;
  if (local_34 == (LPVOID)0x0) {
    return 0x8007000e;
  }
  SVar1 = GetAsyncKeyState(0x10);
  if (SVar1 < 0) {
    SVar1 = GetAsyncKeyState(0x11);
    if (SVar1 < 0) {
      iVar4 = 1;
      goto LAB_5f51760b;
    }
  }
  iVar4 = 0;
LAB_5f51760b:
  iVar4 = FUN_5f515000(&local_38,iVar4);
  pcVar5 = GlobalHandle_exref;
  if (iVar4 == 0) {
    pvVar2 = GlobalHandle(local_34);
    GlobalUnlock(pvVar2);
  }
  else {
    uVar3 = 0;
    iVar4 = 0;
    if ((-1 < param_3) && ((0 < param_3 || (param_2 != 0)))) {
      do {
        do {
          *(undefined4 *)(param_1 + uVar3 * 8) = *(undefined4 *)((int)local_34 + uVar3 * 8);
          *(undefined4 *)(param_1 + 4 + uVar3 * 8) = *(undefined4 *)((int)local_34 + uVar3 * 8 + 4);
          bVar7 = 0xfffffffe < uVar3;
          uVar3 = uVar3 + 1;
          iVar4 = iVar4 + (uint)bVar7;
        } while (iVar4 < param_3);
      } while ((iVar4 <= param_3) && (uVar3 < param_2));
    }
    pcVar5 = GlobalHandle_exref;
    pvVar2 = GlobalHandle(local_34);
    GlobalUnlock(pvVar2);
  }
  pvVar2 = (HGLOBAL)(*pcVar5)(local_34);
  GlobalFree(pvVar2);
  return 0;
}


