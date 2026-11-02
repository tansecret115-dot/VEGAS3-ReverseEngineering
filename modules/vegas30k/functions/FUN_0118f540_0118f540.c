/* Module: vegas30k.dll
   Function: FUN_0118f540
   Address: 0118f540
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0118f624) */

void __fastcall FUN_0118f540(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBX;
  uint unaff_ESI;
  uint local_10;
  int local_c;
  
  if (((*(int *)(param_1 + 0x18) == 0) || (*(int *)(param_1 + 0x28) == 0)) ||
     (piVar1 = *(int **)(param_1 + 100), piVar1 == (int *)0x0)) {
    uVar3 = *(uint *)(param_1 + 0x58);
    goto LAB_0118f627;
  }
  if ((*(int *)(param_1 + 0x1c) == 0) && (*(int *)(param_1 + 0x78) != 0)) {
    return;
  }
  local_10 = 0;
  local_c = 0;
  (**(code **)(*piVar1 + 0xc))(piVar1,&local_10);
  local_10 = 0;
  local_c = 0;
  FUN_0118f360(&local_10);
  if (*(int *)(param_1 + 0x1c) == 0) {
LAB_0118f5e3:
    if (*(int *)(param_1 + 0x78) == 0) {
      syncoutUpdatePosition
                (*(undefined4 *)(param_1 + 0x28),*(uint *)(param_1 + 0x70) + unaff_ESI,
                 *(int *)(param_1 + 0x74) + unaff_EBX +
                 (uint)CARRY4(*(uint *)(param_1 + 0x70),unaff_ESI),600000000,0);
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x74) + unaff_EBX + (uint)CARRY4(*(uint *)(param_1 + 0x70),unaff_ESI)
    ;
    if ((local_c < iVar2) ||
       ((local_c <= iVar2 && (local_10 <= *(uint *)(param_1 + 0x70) + unaff_ESI))))
    goto LAB_0118f5e3;
    FUN_0118f2c0();
    FUN_0118f1f0(unaff_ESI,unaff_EBX);
  }
  uVar3 = *(uint *)(param_1 + 0x84);
  if (*(uint *)(param_1 + 0x58) <= uVar3) {
    *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58);
    return;
  }
LAB_0118f627:
  *(uint *)(param_1 + 0x58) = uVar3;
  return;
}


