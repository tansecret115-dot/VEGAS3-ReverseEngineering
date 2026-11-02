/* Module: mp3plug.dll
   Function: FUN_5f6bac40
   Address: 5f6bac40
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f6bac40(int *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int unaff_EBX;
  int unaff_ESI;
  int iVar3;
  int *unaff_EDI;
  int *unaff_retaddr;
  uint *puVar4;
  int *piStack_10;
  int *apiStack_c [2];
  undefined1 auStack_4 [4];
  
  piVar1 = param_1;
  iVar3 = 0;
  if (param_1 != (int *)0x0) {
    if ((param_2 & 4) != 0) {
      iVar2 = *param_1;
      param_1 = (int *)0x0;
      iVar2 = (**(code **)(iVar2 + 0xc))(piVar1,&param_1);
      if ((-1 < iVar2) && (param_1 != (int *)0x0)) {
        iVar2 = (**(code **)(*param_1 + 0xc))(param_1,apiStack_c,0xc,&piStack_10);
        if (iVar2 == 0) {
          iVar3 = unaff_EBX;
        }
        (**(code **)(*apiStack_c[0] + 0x14))(apiStack_c[0],0,0,0,0);
        (**(code **)(*unaff_EDI + 8))(unaff_EDI);
      }
    }
    if ((param_2 & 1) != 0) {
      puVar4 = &param_2;
      param_2 = 0;
      iVar2 = (**(code **)(*piVar1 + 0x1c))(piVar1);
      if ((-1 < iVar2) && (unaff_retaddr != (int *)0x0)) {
        iVar2 = (**(code **)(*unaff_retaddr + 0xc))(unaff_retaddr,&stack0xffffffec,0xc,auStack_4);
        if (iVar2 == 0) {
          iVar3 = iVar3 + unaff_ESI;
        }
        (**(code **)(*piStack_10 + 0x14))(piStack_10,0,0,0,0);
        (**(code **)(*puVar4 + 8))(puVar4);
      }
    }
  }
  return iVar3;
}


