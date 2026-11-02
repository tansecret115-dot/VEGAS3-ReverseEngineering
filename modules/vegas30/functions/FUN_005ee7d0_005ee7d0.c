/* Module: vegas30.exe
   Function: FUN_005ee7d0
   Address: 005ee7d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005ee7d0(uchar *param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_ESI;
  int *unaff_EDI;
  undefined4 *puVar4;
  int *piVar5;
  ISfReadFileClass *pIVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  ISfReadFileClass *local_138;
  undefined1 local_134 [8];
  undefined *puStack_12c;
  uchar auStack_128 [24];
  undefined4 local_110 [59];
  uint uStack_24;
  int iStack_20;
  int iStack_14;
  
  uVar3 = 0;
  puVar4 = local_110;
  for (iVar2 = 0x44; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_138 = (ISfReadFileClass *)0x0;
  lVar1 = SfFioFindLockedReader((char *)param_1,DAT_0064b510,&local_138);
  if (lVar1 == 0) {
    puVar8 = local_134;
    puVar7 = &DAT_0060ee98;
    pIVar6 = local_138;
    iVar2 = (*(code *)**(undefined4 **)local_138)();
    if (-1 < iVar2) {
      piVar5 = (int *)&stack0xfffffec4;
      iVar2 = (**(code **)(*unaff_ESI + 0x18))(unaff_ESI,2,&local_138);
      if ((-1 < iVar2) && (puVar8 != (undefined1 *)0x0)) {
        _mbscpy(auStack_128,param_1);
        uStack_24 = (uint)(-1 < iStack_14);
        puStack_12c = puVar7;
        _SfDialogBoxParam_20(DAT_00647204,0x581,DAT_00647624,&LAB_005ee4f0,&puStack_12c);
        if (iStack_20 != 0) {
          if (puStack_12c == (undefined *)0xfffffed6) {
            (**(code **)(*piVar5 + 0x18))(piVar5,&stack0xfffffec4);
          }
          else {
            (**(code **)(*(int *)pIVar6 + 0x1c))
                      (pIVar6,DAT_00647624,&stack0xfffffebc,&stack0xfffffeb4,&stack0xfffffec0);
          }
          uVar3 = 1;
        }
      }
      (**(code **)(*(int *)pIVar6 + 8))(pIVar6);
    }
    (**(code **)(*unaff_EDI + 8))(unaff_EDI);
  }
  else if (lVar1 == 1) {
    (**(code **)(*(int *)local_138 + 8))();
    return 1;
  }
  return uVar3;
}


