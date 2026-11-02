/* Module: vegas30.exe
   Function: FUN_004569d0
   Address: 004569d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004569d0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  POINT pt;
  BOOL BVar2;
  int *piVar3;
  uint uVar4;
  
  if ((((*(byte *)(param_1 + 0x1c) & 2) != 0) || (param_2 != *(int *)(param_1 + 0x178))) ||
     (param_3 != *(int *)(param_1 + 0x17c))) {
    uVar4 = 0;
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xffffefff;
    *(undefined4 *)(param_1 + 0x174) = 0;
    piVar3 = (int *)(param_1 + 0x50);
    do {
      piVar1 = (int *)*piVar3;
      pt.y = param_3;
      pt.x = param_2;
      BVar2 = PtInRect((RECT *)(piVar1 + 2),pt);
      if (BVar2 != 0) {
        *(int *)(param_1 + 0x174) = piVar1[8];
        if (*(code **)(*piVar1 + 8) != (code *)0x0) {
          uVar4 = (**(code **)(*piVar1 + 8))(param_1,piVar1,param_2,param_3);
          *(uint *)(param_1 + 0x174) = *(uint *)(param_1 + 0x174) | uVar4;
        }
        break;
      }
      uVar4 = uVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (uVar4 < 0x10);
    *(int *)(param_1 + 0x178) = param_2;
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xfffffffd;
    *(int *)(param_1 + 0x17c) = param_3;
    FUN_00456a90(param_1);
  }
  return;
}


