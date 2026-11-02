/* Module: vegas30.exe
   Function: FUN_005fa330
   Address: 005fa330
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005fa330(uint param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  HGLOBAL hMem;
  LPVOID pvVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *unaff_retaddr;
  
  uVar6 = 0x80070057;
  piVar1 = (int *)(param_1 + 8);
  (**(code **)(*(int *)(param_1 + 8) + 0x24))(piVar1,1);
  if (((unaff_retaddr == (undefined4 *)0x0) || (*unaff_retaddr = 0, param_2 != 0)) ||
     ((param_1 & 2) == 0)) goto LAB_005fa3cf;
  if (*(int *)(param_1 + 0x128) == 0) {
    hMem = GlobalAlloc(0x40,0x58);
    pvVar3 = GlobalLock(hMem);
    if (pvVar3 == (LPVOID)0x0) {
LAB_005fa39f:
      piVar5 = (int *)0x0;
    }
    else {
      iVar4 = FUN_005fa400(-(uint)(param_1 != 0) & (uint)piVar1);
      if (iVar4 == 0) goto LAB_005fa39f;
      piVar5 = (int *)(iVar4 + 4);
    }
    *(int **)(param_1 + 0x128) = piVar5;
    if (piVar5 == (int *)0x0) {
      uVar6 = 0x8007000e;
    }
    else {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
  }
  puVar2 = *(undefined4 **)(param_1 + 0x128);
  if (puVar2 != (undefined4 *)0x0) {
    uVar6 = (**(code **)*puVar2)(puVar2,&DAT_0060ef48,unaff_retaddr);
  }
LAB_005fa3cf:
  (**(code **)(*piVar1 + 0x24))(piVar1,0);
  return uVar6;
}


