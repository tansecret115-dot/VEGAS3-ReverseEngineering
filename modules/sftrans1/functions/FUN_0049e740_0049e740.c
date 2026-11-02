/* Module: sftrans1.dll
   Function: FUN_0049e740
   Address: 0049e740
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0049e740(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int unaff_ESI;
  undefined4 *puVar4;
  int unaff_retaddr;
  undefined4 local_48 [18];
  
  if (param_3 == 0) {
    (**(code **)(*param_1 + 0x1c))(param_1,local_48);
    if (unaff_ESI == 0) {
      puVar4 = local_48;
      puVar3 = (undefined4 *)(unaff_retaddr + 8);
      for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar3 = puVar3 + 1;
      }
      return;
    }
    switch(unaff_ESI) {
    case 1:
      puVar3 = (undefined4 *)(unaff_retaddr + 0x24);
      iVar2 = 4;
      puVar4 = (undefined4 *)register0x00000010;
      do {
        iVar2 = iVar2 + -1;
        puVar3[-1] = puVar4[-6];
        *puVar3 = puVar4[-4];
        puVar3 = puVar3 + -2;
        puVar4 = puVar4 + -4;
      } while (iVar2 != 0);
      return;
    case 2:
      puVar4 = (undefined4 *)(unaff_retaddr + 0x24);
      iVar2 = 4;
      do {
        uVar1 = ftol();
        puVar4[-1] = uVar1;
        uVar1 = ftol();
        *puVar4 = uVar1;
        iVar2 = iVar2 + -1;
        puVar4 = puVar4 + -2;
      } while (iVar2 != 0);
      return;
    case 3:
      iVar2 = 4;
      puVar4 = (undefined4 *)(unaff_retaddr + 0x24);
      do {
        uVar1 = ftol();
        puVar4[-1] = uVar1;
        uVar1 = ftol();
        *puVar4 = uVar1;
        iVar2 = iVar2 + -1;
        puVar4 = puVar4 + -2;
      } while (iVar2 != 0);
      return;
    }
  }
  else {
    puVar4 = (undefined4 *)(param_3 + 8);
    puVar3 = (undefined4 *)(param_2 + 8);
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}


