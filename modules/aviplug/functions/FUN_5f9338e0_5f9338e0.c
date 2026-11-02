/* Module: aviplug.dll
   Function: FUN_5f9338e0
   Address: 5f9338e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f9338e0(int param_1,undefined4 *param_2)

{
  int iVar1;
  int extraout_EAX;
  int iVar2;
  int *unaff_ESI;
  int *piVar3;
  int iVar4;
  int local_18;
  undefined4 uStack_10;
  int *piStack_8;
  
  iVar1 = param_1;
  *param_2 = 0;
  iVar2 = 0;
  iVar4 = -0x7ffb1ff6;
  if (*(int *)(param_1 + 0x240) < 1) {
    return -0x7ffb1ff6;
  }
  local_18 = 0;
  do {
    piVar3 = (int *)(local_18 + *(int *)(iVar1 + 0x244));
    if (*piVar3 == 1) {
      if (*(int *)(piVar3[2] * 0x80 + 0x70 + *(int *)(iVar1 + 0x22c)) == 0x73647561) {
        *param_2 = *(undefined4 *)(*(int *)(piVar3[2] * 0x80 + *(int *)(iVar1 + 0x22c) + 0xc4) + 4);
        return iVar4;
      }
      if ((piVar3[10] == 0) &&
         (piVar3 = (int *)FUN_5f933500(iVar1,iVar2,0,(int *)0x0,0,0), extraout_EAX < 0)) {
        return extraout_EAX;
      }
      (*(code *)**(undefined4 **)piVar3[10])((undefined4 *)piVar3[10],&DAT_5f9d9c90,&param_1);
      iVar4 = (**(code **)(*piStack_8 + 0x30))(piStack_8,&stack0xffffffe0,0x12,0,0,0,0);
      (**(code **)(*unaff_ESI + 8))(unaff_ESI);
      if (-1 < iVar4) {
        *param_2 = uStack_10;
        return iVar4;
      }
    }
    iVar2 = iVar2 + 1;
    local_18 = local_18 + 0x38;
    if (*(int *)(iVar1 + 0x240) <= iVar2) {
      return iVar4;
    }
  } while( true );
}


