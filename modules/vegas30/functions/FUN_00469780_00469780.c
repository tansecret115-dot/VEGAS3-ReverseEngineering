/* Module: vegas30.exe
   Function: FUN_00469780
   Address: 00469780
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00469780(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  int local_c;
  
  piVar2 = param_2;
  (**(code **)(*param_2 + 0x14))();
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (*(LPCSTR *)(param_1 + 0x8c) != (LPCSTR)0x0) {
    uStack_3c = 0x4697c1;
    iVar3 = lstrlenA(*(LPCSTR *)(param_1 + 0x8c));
    *(int *)(param_1 + 0x88) = iVar3 * 2 + 2;
  }
  uStack_3c = 0x8c;
  piStack_44 = piVar2;
  iStack_40 = param_1;
  iVar3 = (**(code **)(*piVar2 + 0x10))();
  if (-1 < iVar3) {
    if (param_2 == (int *)0x8c) {
      piVar1 = *(int **)(param_1 + 0x88);
      if (piVar1 != (int *)0x0) {
        FUN_0060ac30();
        MultiByteToWideChar(0,1,*(LPCSTR *)(param_1 + 0x8c),-1,(LPWSTR)&piStack_44,(uint)piVar1 >> 1
                           );
        *(undefined2 *)(&stack0xffffffba + ((uint)piVar1 >> 1) * 2) = 0;
        iVar3 = (**(code **)(*piVar2 + 0x10))(piVar2,&piStack_44,piVar1,&param_2);
        if (iVar3 < 0) goto LAB_004698ee;
        if (param_2 != piVar1) {
          iVar3 = -0x7ffb1ff7;
          goto LAB_004698ee;
        }
      }
      iVar3 = FUN_005bddf0(piVar2,1);
      if (-1 < iVar3) {
        local_c = 0;
        if (0 < *(int *)(param_1 + 0x84)) {
          do {
            iVar3 = FUN_005bda40(piVar2,1);
            if (iVar3 < 0) goto LAB_004698ee;
            local_c = local_c + 1;
          } while (local_c < *(int *)(param_1 + 0x84));
        }
        if (*(int *)(param_1 + 4) == 2) {
          iVar3 = FUN_005bdb20(piVar2,1);
        }
        else if (*(int *)(param_1 + 4) == 3) {
          iVar3 = FUN_005bdc20(piVar2,1);
        }
        if (-1 < iVar3) {
          return iVar3;
        }
      }
    }
    else {
      iVar3 = -0x7ffb1ff7;
    }
  }
LAB_004698ee:
  (**(code **)(*piVar2 + 0x14))(piVar2,0,0,0,0);
  return iVar3;
}


