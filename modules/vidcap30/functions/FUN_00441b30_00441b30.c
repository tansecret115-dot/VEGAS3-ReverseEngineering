/* Module: vidcap30.exe
   Function: FUN_00441b30
   Address: 00441b30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00441b30(int param_1)

{
  double dVar1;
  undefined4 uVar2;
  float10 fVar3;
  undefined8 uVar4;
  CHAR local_14 [20];
  
  uVar2 = DAT_005bb838;
  fVar3 = (float10)FUN_0042ed90(DAT_005bb838);
  dVar1 = (double)fVar3;
  uVar4 = FUN_0042ebb0(uVar2);
  FUN_0045aec0(uVar4,dVar1,local_14,0x14);
  SetWindowTextA(*(HWND *)(param_1 + 0x14ec),local_14);
  uVar4 = FUN_0042ec60(uVar2);
  FUN_0045aec0(uVar4,dVar1,local_14,0x14);
  SetWindowTextA(*(HWND *)(param_1 + 0x14f0),local_14);
  uVar4 = FUN_0042ed00(uVar2);
  FUN_0045aec0(uVar4,dVar1,local_14,0x14);
  SetWindowTextA(*(HWND *)(param_1 + 0x14f4),local_14);
  return;
}


