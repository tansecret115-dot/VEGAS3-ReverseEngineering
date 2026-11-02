/* Module: sfpublish.dll
   Function: FUN_00408980
   Address: 00408980
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00408980(void *this,int param_1,int *param_2,HWND param_3)

{
  void *this_00;
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  BOOL BVar6;
  uint uVar7;
  LONG LVar8;
  int *piStack_4;
  
  this_00 = (void *)(param_1 + -0x20);
  piStack_4 = this;
  if ((*(uint *)(param_1 + 0x68) & 0x40) == 0) {
    *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) | 0x40;
    piVar1 = *(int **)(param_1 + 0x40);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x1c))(piVar1,1,0,0);
    }
    if (*(int *)(param_1 + 100) != -0x32323233) {
      FUN_00408630(*(undefined4 **)(param_1 + 0x30));
      *(undefined4 *)(param_1 + 100) = 0xcdcdcdcd;
    }
    piVar2 = *(int **)(param_1 + 0x34);
    piVar1 = (int *)(param_1 + 0x34);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x50))(piVar2,*(undefined4 *)(param_1 + 0x6c));
      (**(code **)(*(int *)*piVar1 + 0x18))((int *)*piVar1,1);
      (**(code **)(*(int *)*piVar1 + 0xc))((int *)*piVar1,0);
    }
    puVar3 = *(undefined4 **)(param_1 + 0x30);
    if (puVar3 != (undefined4 *)0x0) {
      piStack_4 = (int *)0x0;
      (**(code **)*puVar3)(puVar3,&DAT_0043c9d0,&piStack_4);
      if (piStack_4 != (int *)0x0) {
        (**(code **)(*piStack_4 + 0xc))(piStack_4,0);
        if (piStack_4 != (int *)0x0) {
          (**(code **)(*piStack_4 + 8))(piStack_4);
        }
      }
    }
    FUN_00408710((int *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 0x60) = 0;
    FUN_00408730((int *)(param_1 + 0x44));
    FUN_004086b0(piVar1);
    FUN_00408600((int *)(param_1 + 0x30));
    FUN_004086f0((int *)(param_1 + 0x3c));
    FUN_004086d0((int *)(param_1 + 0x38));
    *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) & 0xffffffa4;
  }
  if (*(HWND *)(param_1 + -0x1c) != (HWND)0x0) {
    RedrawWindow(*(HWND *)(param_1 + -0x1c),(RECT *)0x0,(HRGN)0x0,0x507);
    if ((*(byte *)(param_1 + 0x94) & 0x10) == 0) {
      DestroyWindow(*(HWND *)(param_1 + -0x1c));
    }
    else {
      iVar5 = FUN_00408880(this_00,1);
      if (iVar5 != 0) {
        *(uint *)(param_1 + 0x94) = *(uint *)(param_1 + 0x94) & 0xffffffef;
      }
    }
  }
  BVar6 = IsWindow(param_3);
  if (BVar6 != 0) {
    uVar7 = FUN_00408820(this_00,param_3);
    *(uint *)(param_1 + 0x94) = (uVar7 & 1) << 4 | *(uint *)(param_1 + 0x94) & 0xffffffef;
    iVar5 = FUN_0040af30(this_00,param_2);
    if (iVar5 < 0) {
      FUN_00407c10((int)this_00);
      if (*(HWND *)(param_1 + -0x1c) != (HWND)0x0) {
        RedrawWindow(*(HWND *)(param_1 + -0x1c),(RECT *)0x0,(HRGN)0x0,0x507);
        if ((*(byte *)(param_1 + 0x94) & 0x10) == 0) {
          DestroyWindow(*(HWND *)(param_1 + -0x1c));
          return iVar5;
        }
        GetWindowLongA(*(HWND *)(param_1 + -0x1c),-4);
        LVar8 = SetWindowLongA(*(HWND *)(param_1 + -0x1c),-4,*(LONG *)(param_1 + -4));
        if (LVar8 != 0) {
          iVar4 = *(int *)(param_1 + -0x1c);
          *(code **)(param_1 + -4) = DefWindowProcA_exref;
          *(undefined4 *)(param_1 + -0x1c) = 0;
          if (iVar4 != 0) {
            *(uint *)(param_1 + 0x94) = *(uint *)(param_1 + 0x94) & 0xffffffef;
          }
        }
      }
    }
    return iVar5;
  }
  return 1;
}


