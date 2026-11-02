/* Module: encn3260.dll
   Function: FUN_6649b430
   Address: 6649b430
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6649b430(void *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  ulonglong uVar5;
  ushort uVar6;
  ushort uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined2 uVar11;
  undefined2 extraout_var;
  int local_c;
  undefined1 local_5;
  
  if ((*(byte *)((int)param_1 + 0x6e) & 8) == 0) {
    *(byte *)((int)param_1 + 0x6e) = *(byte *)((int)param_1 + 0x6e) | 8;
    while( true ) {
      if (param_1 == (void *)0xffffffb8) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)((int)param_1 + 0x58);
      }
      if (iVar8 < 1) break;
      puVar1 = *(undefined4 **)((int)param_1 + 0x40);
      piVar2 = *(int **)(*(int *)((int)param_1 + 0x4c) + 8);
      iVar8 = puVar1[3];
      iVar3 = puVar1[2];
      local_c = CONCAT22(local_c._2_2_,*(undefined2 *)(puVar1 + 6));
      if (iVar8 - iVar3 < 0) {
        uVar10 = (uint)*(ushort *)(puVar1 + 5);
      }
      else {
        uVar10 = 0;
      }
      uVar6 = (**(code **)*puVar1)();
      iVar8 = local_c - ((iVar8 - iVar3) + uVar10);
      uVar7 = (**(code **)(*piVar2 + 0x18))(piVar2);
      if ((ushort)((ulonglong)(iVar8 - 1U & 0xffff) / (ulonglong)(longlong)(int)(uint)uVar6) <=
          uVar7) break;
      iVar8 = **(int **)((int)param_1 + 0x40);
      uVar9 = (**(code **)(*piVar2 + 0x18))(piVar2);
      uVar9 = (**(code **)(*piVar2 + 0x1c))(piVar2,uVar9);
      (**(code **)(iVar8 + 0x10))(uVar9);
      (**(code **)(*piVar2 + 8))(piVar2);
      FUN_664ba9f0((int *)((int)param_1 + 0x48));
    }
    puVar1 = *(undefined4 **)((int)param_1 + 0x40);
    iVar8 = puVar1[3];
    iVar3 = puVar1[2];
    if (iVar8 - iVar3 < 0) {
      uVar10 = (uint)*(ushort *)(puVar1 + 5);
    }
    else {
      uVar10 = 0;
    }
    uVar6 = (**(code **)*puVar1)();
    uVar5 = (ulonglong)((iVar8 - iVar3) + uVar10 & 0xffff) / (ulonglong)(longlong)(int)(uint)uVar6;
    uVar10 = (uint)uVar5;
    if ((short)uVar5 != 0) {
      if ((*(byte *)((int)param_1 + 0x6d) & 8) != 0) {
        local_5 = 0x68;
        (**(code **)(**(int **)((int)param_1 + 0x40) + 0x10))(&local_5,1);
        uVar10 = uVar10 + 1;
      }
      if ((*(byte *)((int)param_1 + 0x6d) & 0x10) != 0) {
        piVar4 = *(int **)((int)param_1 + 0x20);
        piVar2 = (int *)((int)param_1 + 0x20);
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 8))(piVar4);
          *piVar2 = 0;
          *(byte *)((int)param_1 + 0x6c) = *(byte *)((int)param_1 + 0x6c) & 0xdf;
          (**(code **)(**(int **)((int)param_1 + 0x18) + 0xc))
                    (*(int **)((int)param_1 + 0x18),piVar2);
          piVar4 = (int *)*piVar2;
          if (piVar4 == (int *)0x0) {
            *(undefined4 *)((int)param_1 + 0x6f) = 0x8007000e;
            *(byte *)((int)param_1 + 0x6e) = *(byte *)((int)param_1 + 0x6e) & 0xf7;
            return;
          }
          (**(code **)(*piVar4 + 0xc))(piVar4,*(undefined4 *)((int)param_1 + 0x28));
          uVar11 = *(undefined2 *)((int)param_1 + 0x34);
          iVar8 = *(int *)((int)param_1 + 0x2c);
          if (*(int *)((int)param_1 + 0x7b) != 0) {
            uVar11 = *(undefined2 *)((int)param_1 + 0x79);
            iVar8 = *(int *)((int)param_1 + 0x7b);
          }
          (**(code **)(*(int *)*piVar2 + 0x18))((int *)*piVar2,iVar8,CONCAT22(extraout_var,uVar11));
        }
      }
      (**(code **)(**(int **)((int)param_1 + 0x40) + 0xc))
                (*(undefined4 *)((int)param_1 + 0x5c),uVar10);
      local_c = 0x7fa6;
      FUN_6649baa0(*(int *)((int)param_1 + 0x5c),uVar10,*(int *)((int)param_1 + 0x60),
                   (undefined2 *)&local_c);
      if ((*(byte *)((int)param_1 + 0x6d) & 8) != 0) {
        FUN_6649b610(param_1,*(undefined4 *)((int)param_1 + 0x60),local_c);
        *(byte *)((int)param_1 + 0x6e) = *(byte *)((int)param_1 + 0x6e) & 0xf7;
        return;
      }
      (**(code **)(**(int **)((int)param_1 + 0x44) + 0x10))
                (*(undefined4 *)((int)param_1 + 0x60),local_c);
    }
    *(byte *)((int)param_1 + 0x6e) = *(byte *)((int)param_1 + 0x6e) & 0xf7;
  }
  return;
}


