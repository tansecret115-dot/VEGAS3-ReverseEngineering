/* Module: vegas30.exe
   Function: FUN_004092b0
   Address: 004092b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_004092b0(int *param_1,int param_2,undefined4 param_3,HWND param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  BOOL BVar5;
  uint uVar6;
  LONG LVar7;
  int *piStack_4;
  
  piStack_4 = param_1;
  if ((*(uint *)(param_2 + 0x68) & 0x40) == 0) {
    *(uint *)(param_2 + 0x68) = *(uint *)(param_2 + 0x68) | 0x40;
    piVar1 = *(int **)(param_2 + 0x40);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x1c))(piVar1,1,0,0);
    }
    if (*(int *)(param_2 + 100) != -0x32323233) {
      FUN_00408f30(*(undefined4 *)(param_2 + 0x30),param_2 + 0x50,*(int *)(param_2 + 100));
      *(undefined4 *)(param_2 + 100) = 0xcdcdcdcd;
    }
    piVar1 = *(int **)(param_2 + 0x34);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x50))(piVar1,*(undefined4 *)(param_2 + 0x6c));
      piVar1 = *(int **)(param_2 + 0x34);
      (**(code **)(*piVar1 + 0x18))(piVar1,1);
      piVar1 = *(int **)(param_2 + 0x34);
      (**(code **)(*piVar1 + 0xc))(piVar1,0);
    }
    puVar2 = *(undefined4 **)(param_2 + 0x30);
    if (puVar2 != (undefined4 *)0x0) {
      piStack_4 = (int *)0x0;
      (**(code **)*puVar2)(puVar2,&DAT_00633588,&piStack_4);
      if (piStack_4 != (int *)0x0) {
        (**(code **)(*piStack_4 + 0xc))(piStack_4,0);
        if (piStack_4 != (int *)0x0) {
          (**(code **)(*piStack_4 + 8))(piStack_4);
        }
      }
    }
    FUN_00409040();
    *(undefined4 *)(param_2 + 0x60) = 0;
    FUN_00409060();
    FUN_00408fe0();
    FUN_00408fb0();
    FUN_00409020();
    FUN_00409000();
    *(uint *)(param_2 + 0x68) = *(uint *)(param_2 + 0x68) & 0xffffffa4;
  }
  if (*(HWND *)(param_2 + -0x1c) != (HWND)0x0) {
    RedrawWindow(*(HWND *)(param_2 + -0x1c),(RECT *)0x0,(HRGN)0x0,0x507);
    if ((*(byte *)(param_2 + 0x94) & 0x10) == 0) {
      DestroyWindow(*(HWND *)(param_2 + -0x1c));
    }
    else {
      iVar4 = FUN_004091b0(1);
      if (iVar4 != 0) {
        *(uint *)(param_2 + 0x94) = *(uint *)(param_2 + 0x94) & 0xffffffef;
      }
    }
  }
  BVar5 = IsWindow(param_4);
  if (BVar5 != 0) {
    uVar6 = FUN_00409150(param_4);
    *(uint *)(param_2 + 0x94) = (uVar6 & 1) << 4 | *(uint *)(param_2 + 0x94) & 0xffffffef;
    iVar4 = FUN_0040b920(param_3,1,0);
    if (iVar4 < 0) {
      FUN_00408540();
      if (*(HWND *)(param_2 + -0x1c) != (HWND)0x0) {
        RedrawWindow(*(HWND *)(param_2 + -0x1c),(RECT *)0x0,(HRGN)0x0,0x507);
        if ((*(byte *)(param_2 + 0x94) & 0x10) == 0) {
          DestroyWindow(*(HWND *)(param_2 + -0x1c));
          return iVar4;
        }
        GetWindowLongA(*(HWND *)(param_2 + -0x1c),-4);
        LVar7 = SetWindowLongA(*(HWND *)(param_2 + -0x1c),-4,*(LONG *)(param_2 + -4));
        if (LVar7 != 0) {
          iVar3 = *(int *)(param_2 + -0x1c);
          *(code **)(param_2 + -4) = DefWindowProcA_exref;
          *(undefined4 *)(param_2 + -0x1c) = 0;
          if (iVar3 != 0) {
            *(uint *)(param_2 + 0x94) = *(uint *)(param_2 + 0x94) & 0xffffffef;
          }
        }
      }
    }
    return iVar4;
  }
  return 1;
}


