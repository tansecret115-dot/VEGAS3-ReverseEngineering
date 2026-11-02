/* Module: encn3260.dll
   Function: FUN_6648ccc0
   Address: 6648ccc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall
FUN_6648ccc0(undefined4 param_1,undefined4 param_2,int *param_3,void *param_4,undefined4 param_5,
            int param_6,short param_7,int param_8,int param_9)

{
  short sVar1;
  void *pvVar2;
  void *pvVar3;
  uint uVar4;
  undefined4 extraout_EDX;
  ushort uVar5;
  undefined2 *puVar6;
  int iVar7;
  
  if (param_4 != (void *)0x0) {
    sVar1 = param_7 + -1;
    if (-1 < sVar1) {
      puVar6 = (undefined2 *)(param_6 + sVar1 * 2);
      iVar7 = sVar1 + 1;
      do {
        FUN_66494730(param_4,CONCAT22((short)((uint)param_2 >> 0x10),*puVar6));
        puVar6 = puVar6 + -1;
        iVar7 = iVar7 + -1;
        param_2 = extraout_EDX;
      } while (iVar7 != 0);
    }
    if (param_9 != 0) {
      pvVar2 = operator_new(param_9 * 4 + 4);
      uVar5 = 0;
      iVar7 = param_9 + -1;
      sVar1 = (short)iVar7;
      pvVar3 = pvVar2;
      while ((-1 < sVar1 && (uVar5 < 10))) {
        pvVar3 = (void *)FUN_664946e0(param_4,CONCAT22((short)((uint)pvVar3 >> 0x10),
                                                       *(undefined2 *)(param_8 + (short)iVar7 * 2)),
                                      1);
        if (pvVar3 != (void *)0x0) {
          uVar4 = (uint)uVar5;
          uVar5 = uVar5 + 1;
          *(void **)((int)pvVar2 + uVar4 * 4) = pvVar3;
        }
        iVar7 = iVar7 + -1;
        sVar1 = (short)iVar7;
      }
      *(undefined4 *)((int)pvVar2 + (uint)uVar5 * 4) = 0;
      (**(code **)(*param_3 + 0xc))(param_3,param_5,pvVar2);
      operator_delete(pvVar2);
    }
    return 0;
  }
  return 0x80040009;
}


