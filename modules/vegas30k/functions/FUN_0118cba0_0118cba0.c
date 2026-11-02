/* Module: vegas30k.dll
   Function: FUN_0118cba0
   Address: 0118cba0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_0118cba0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBX;
  int unaff_ESI;
  uint unaff_EDI;
  undefined8 uVar6;
  uint unaff_retaddr;
  undefined4 local_8;
  undefined4 local_4;
  
  if ((*(uint *)(param_1 + 0x50) & 0x400) == 0) {
    uVar2 = _SfGetMillisec_0();
    *(undefined4 *)(param_1 + 0x20c) = uVar2;
  }
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  if ((*(int *)(param_1 + 0x68) == 0) && (*(int *)(param_1 + 0x6c) == 0x3ff00000)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *(undefined4 *)(param_1 + 0x7c) = uVar2;
  *(undefined4 *)(param_1 + 0x44) = 100;
  local_8 = 0;
  local_4 = 0;
  (**(code **)(**(int **)(param_1 + 0x1f0) + 0x34))(*(int **)(param_1 + 0x1f0),&local_8,0);
  if (unaff_ESI != 0 || unaff_EBX != 0) {
    uVar6 = __alldiv(unaff_ESI,unaff_EBX,2,0);
    uVar2 = __alldiv(uVar6,10000,0);
    *(undefined4 *)(param_1 + 0x44) = uVar2;
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (((*(uint *)(param_1 + 0x50) & 0x400) != 0) || (*(int *)(param_1 + 0x7c) != 0)) {
    *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x44) << 3;
  }
  uVar5 = unaff_retaddr & 0x30000000;
  if (uVar5 == 0x10000000) {
    piVar1 = *(int **)(param_1 + 0x1f0);
    if ((unaff_retaddr & 0x800000) == 0) {
      iVar3 = (**(code **)(*piVar1 + 0x154))(piVar1,local_8,local_4);
    }
    else {
      iVar3 = (**(code **)(*piVar1 + 0x160))(piVar1,&stack0xffffffe8);
    }
LAB_0118ccff:
    if (iVar3 < 0) {
      return iVar3;
    }
  }
  else {
    if (uVar5 == 0x20000000) {
      iVar3 = (**(code **)(**(int **)(param_1 + 0x1f0) + 300))
                        (*(int **)(param_1 + 0x1f0),local_8,local_4);
      goto LAB_0118ccff;
    }
    if (uVar5 == 0x30000000) {
      piVar1 = *(int **)(param_1 + 0x1f0);
      if ((unaff_retaddr & 0x800000) == 0) {
        iVar3 = (**(code **)(*piVar1 + 0x16c))(piVar1,local_8,local_4);
      }
      else {
        iVar3 = (**(code **)(*piVar1 + 0x178))(piVar1,local_8,local_4,&stack0xffffffe8);
      }
      goto LAB_0118ccff;
    }
  }
  uVar5 = unaff_retaddr & 0xc0000000;
  if (uVar5 == 0x40000000) {
    iVar3 = (**(code **)(**(int **)(param_1 + 0x1fc) + 0x24))(*(int **)(param_1 + 0x1fc));
LAB_0118cd61:
    if (iVar3 < 0) {
      return iVar3;
    }
  }
  else {
    if (uVar5 == 0x80000000) {
      iVar3 = (**(code **)(**(int **)(param_1 + 0x1fc) + 0x14))
                        (*(int **)(param_1 + 0x1fc),local_8,local_4);
      goto LAB_0118cd61;
    }
    if (uVar5 == 0xc0000000) {
      iVar3 = (**(code **)(**(int **)(param_1 + 0x1fc) + 0x44))(*(int **)(param_1 + 0x1fc));
      goto LAB_0118cd61;
    }
    iVar3 = 0;
  }
  if ((unaff_retaddr & 0x10000000) == 0) goto LAB_0118cddb;
  if ((unaff_retaddr & 0x800000) == 0) {
    uVar5 = *(uint *)(param_1 + 0x50) | 0x20;
  }
  else {
    if ((*(int *)(param_1 + 0x204) == 0) && (unaff_EDI != 0)) {
      *(uint *)(param_1 + 0x204) = unaff_EDI;
      *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) | 0x10;
      (**(code **)(param_1 + 0x158))
                (param_1,0xb,&stack0x00000000,*(undefined4 *)(param_1 + 0x15c),&local_8,0);
      goto LAB_0118cddb;
    }
    iVar4 = unaff_EDI + *(int *)(param_1 + 0x204);
    *(int *)(param_1 + 0x204) = iVar4;
    if (iVar4 == 0) goto LAB_0118cddb;
    uVar5 = *(uint *)(param_1 + 0x50) | 0x10;
  }
  *(uint *)(param_1 + 0x50) = uVar5;
LAB_0118cddb:
  if ((unaff_retaddr & 0xe0000000) != 0) {
    *(uint *)(param_1 + 0x50) =
         *(uint *)(param_1 + 0x50) |
         (CONCAT22((short)(unaff_retaddr >> 0x10),0x200) & 0x40ffff) >> 8;
  }
  uVar2 = __alldiv(local_8,local_4,10000,0);
  *(undefined4 *)(param_1 + 0x1a4) = uVar2;
  uVar2 = _SfGetMillisec_0();
  *(undefined4 *)(param_1 + 0x1a8) = uVar2;
  *(undefined4 *)(param_1 + 0x1a0) = uVar2;
  *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 2;
  SetEvent(*(HANDLE *)(param_1 + 0x40));
  if ((((unaff_retaddr & 0x20000000) != 0) ||
      (((unaff_retaddr & 0x10000000) != 0 && ((unaff_retaddr & 0x800000) == 0)))) &&
     (*(int *)(param_1 + 0x68) == 0)) {
    if ((((*(int *)(param_1 + 0x6c) == 0x3ff00000) && (*(int *)(param_1 + 0xb8) != 0)) &&
        ((*(uint *)(param_1 + 0x54) & 0x100000) != 0)) &&
       (iVar4 = FUN_0118f1f0(local_8,local_4), iVar4 == 0)) {
      *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) | 0x200000;
    }
    if (((*(int *)(param_1 + 0x68) == 0) && (*(int *)(param_1 + 0x6c) == 0x3ff00000)) &&
       ((*(int *)(param_1 + 0xbc) != 0 &&
        (((*(uint *)(param_1 + 0x54) & 0x400000) != 0 &&
         (iVar4 = FUN_0118e160(local_8,local_4,1), iVar4 == 0)))))) {
      *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) | 0x800000;
    }
  }
  if ((*(code **)(param_1 + 0x158) != (code *)0x0) && ((*(uint *)(param_1 + 0x50) & 0x22) != 0)) {
    iVar3 = (**(code **)(param_1 + 0x158))
                      (param_1,1,&stack0x00000000,*(undefined4 *)(param_1 + 0x15c),&local_8,0);
    if (iVar3 < 0) {
      FUN_0118c6e0(unaff_EDI,0);
      return iVar3;
    }
    *(uint *)(param_1 + 0x160) = unaff_EDI & 0xffff;
    *(uint *)(param_1 + 0x164) = unaff_EDI & 0xffff0000;
  }
  return iVar3;
}


