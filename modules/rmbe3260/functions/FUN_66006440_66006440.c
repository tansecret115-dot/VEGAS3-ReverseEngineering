/* Module: rmbe3260.dll
   Function: FUN_66006440
   Address: 66006440
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66006440(void *this,int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (uVar1 < 0x533) {
    if (0x530 < uVar1) {
switchD_660064b9_caseD_533:
      puVar4 = (undefined4 *)((int)this + 0x110);
      param_1 = 3;
      do {
        iVar2 = *(int *)*puVar4;
        uVar3 = (**(code **)(iVar2 + 0x124))();
        (**(code **)(iVar2 + 0x130))(uVar1 == uVar3);
        puVar4 = puVar4 + 1;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
      return;
    }
    if ((uVar1 == 0x41c) || (uVar1 == 0x41d)) {
      puVar4 = (undefined4 *)((int)this + 0x11c);
      param_1 = 2;
      do {
        iVar2 = *(int *)*puVar4;
        uVar3 = (**(code **)(iVar2 + 0x124))();
        (**(code **)(iVar2 + 0x130))(uVar1 == uVar3);
        puVar4 = puVar4 + 1;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
      return;
    }
  }
  else {
    switch(uVar1) {
    case 0x533:
      goto switchD_660064b9_caseD_533;
    default:
      goto switchD_660064b9_caseD_534;
    case 0x541:
      pcVar5 = s_context_telecine_htm_6606c2dc;
      break;
    case 0x542:
      pcVar5 = s_context_interlac_htm_6606c2c4;
    }
    FUN_66006550((int *)((int)this + 0x104),pcVar5);
  }
switchD_660064b9_caseD_534:
  return;
}


