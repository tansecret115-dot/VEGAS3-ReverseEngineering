/* Module: vegas30k.dll
   Function: FUN_011bf9b0
   Address: 011bf9b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_011bf9b0(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  int unaff_EBX;
  int iVar3;
  undefined1 *unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 local_10 [16];
  
  iVar3 = 0;
  if (*(int *)(param_1 + 0x18) == 0) {
    return -0x7fff0001;
  }
  puVar2 = local_10;
  uVar5 = 10;
  (**(code **)(**(int **)(param_1 + 8) + 0x84))(*(int **)(param_1 + 8),10,puVar2);
  (**(code **)(**(int **)(param_1 + 8) + 0x84))(*(int **)(param_1 + 8),0xb,&stack0xffffffec);
  if (*(int *)(param_1 + 0x1f0) == 0) {
    iVar3 = (-(uint)(unaff_EBX != 0) & 0x80000000) + 0x80000000;
    uVar4 = 0;
    iVar1 = (**(code **)(param_1 + 0xe0))
                      (param_1,0x10,*(undefined4 *)(param_1 + 0xe4),0,iVar3,0,0,0,0);
    if (iVar1 == 0) {
      return 1;
    }
    iVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 0x4c))
                      (*(int **)(param_1 + 0x18),(undefined4 *)(param_1 + 0xa8),iVar3,uVar4,
                       &LAB_011c05c0,param_1);
    if (-1 < iVar3) {
      *(int *)(param_1 + 0x1f0) = *(int *)(param_1 + 0x1f0) + 1;
      *(undefined4 *)(param_1 + 0xba) = *(undefined4 *)(param_1 + 0xa8);
      *(undefined4 *)(param_1 + 500) = 1;
      *(undefined4 *)(param_1 + 0xbe) = *(undefined4 *)(param_1 + 0xac);
      *(undefined4 *)(param_1 + 0xc2) = *(undefined4 *)(param_1 + 0xb0);
      *(undefined4 *)(param_1 + 0xc6) = *(undefined4 *)(param_1 + 0xb4);
      *(undefined2 *)(param_1 + 0xca) = *(undefined2 *)(param_1 + 0xb8);
    }
  }
  if (*(int *)(param_1 + 500) != 0) {
    if (unaff_EBX != 0) {
      uVar5 = unaff_EDI;
      puVar2 = unaff_ESI;
    }
    (**(code **)(**(int **)(param_1 + 0x18) + 0x78))(*(int **)(param_1 + 0x18),uVar5,puVar2);
    (**(code **)(param_1 + 0xe0))
              (param_1,0x11,*(undefined4 *)(param_1 + 0xe4),0,
               (-(uint)(unaff_EBX != 0) & 0x80000000) + 0x80000000,0,0,0,0);
    iVar3 = 0;
  }
  return iVar3;
}


