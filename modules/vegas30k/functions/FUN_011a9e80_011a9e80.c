/* Module: vegas30k.dll
   Function: FUN_011a9e80
   Address: 011a9e80
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_011a9e80(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  HGLOBAL hMem;
  LPVOID pvVar5;
  int *piVar6;
  int *unaff_EBP;
  int *unaff_ESI;
  undefined4 local_10 [3];
  undefined4 local_4;
  
  piVar6 = *(int **)(param_1 + 0x664);
  local_4 = 0x1100;
  local_10[0] = 0;
  if (piVar6 == (int *)0x0) {
    piVar6 = *(int **)(param_1 + 0x668);
    if (piVar6 == (int *)0x0) {
      iVar4 = (**(code **)(**(int **)(param_1 + 0x66c) + 100))(*(int **)(param_1 + 0x66c),local_10);
    }
    else {
      iVar4 = (**(code **)(*piVar6 + 0x60))(piVar6,local_10);
    }
  }
  else {
    iVar4 = (**(code **)(*piVar6 + 0x54))(piVar6,local_10);
  }
  if (iVar4 < 0) {
LAB_011a9fea:
    iVar1 = *(int *)(param_1 + 0x68c);
    while (iVar1 != 0) {
      (**(code **)(*(int *)**(undefined4 **)(param_1 + 0x674) + 8))
                ((int *)**(undefined4 **)(param_1 + 0x674));
      uVar2 = *(undefined4 *)((int)*(void **)(param_1 + 0x674) + 0x18);
      free(*(void **)(param_1 + 0x674));
      iVar1 = *(int *)(param_1 + 0x68c);
      *(undefined4 *)(param_1 + 0x674) = uVar2;
    }
    return iVar4;
  }
  local_10[0] = *(undefined4 *)(param_1 + 0x68c);
  iVar4 = (**(code **)(*unaff_EBP + 0xc))(unaff_EBP,1,&stack0xffffffec,0);
  do {
    if (iVar4 != 0) {
      (**(code **)(*unaff_EBP + 8))(unaff_EBP);
      *(undefined4 *)(param_1 + 0x4a4) = 1;
      return 0;
    }
    hMem = GlobalAlloc(0x40,0x210);
    pvVar5 = GlobalLock(hMem);
    if ((pvVar5 == (LPVOID)0x0) || (piVar6 = (int *)FUN_011bf0a0(param_1), piVar6 == (int *)0x0)) {
      iVar4 = -0x7ff8fff2;
      goto LAB_011a9fea;
    }
    iVar4 = FUN_011bf290(0);
    if (-1 < iVar4) {
      unaff_ESI = calloc(1,0x1c);
      if (unaff_ESI == (int *)0x0) {
        iVar4 = -0x7ff8fff2;
        if (piVar6 != (int *)0x0) {
          (**(code **)(*piVar6 + 0x80))(1);
        }
        goto LAB_011a9fea;
      }
      *unaff_ESI = (int)piVar6;
      (**(code **)(*piVar6 + 4))(piVar6);
      unaff_ESI[1] = (int)piVar6;
      unaff_ESI[2] = 4;
      unaff_ESI[3] = 0;
      unaff_ESI[4] = 0;
      unaff_ESI[5] = 0;
      unaff_ESI[6] = 0;
      piVar3 = unaff_ESI;
      if (*(int *)(param_1 + 0x68c) == 0) {
        *(int **)(param_1 + 0x68c) = unaff_ESI;
        piVar3 = piRam00000018;
      }
      piRam00000018 = piVar3;
      (**(code **)(*piVar6 + 0x38))(piVar6,param_1 + 0x4ac);
      (**(code **)(*piVar6 + 0x40))(piVar6,0xf,&stack0xffffffe8);
      *(int *)(param_1 + 0x690) = *(int *)(param_1 + 0x690) + 1;
    }
    (**(code **)(iRam00000000 + 8))(0);
    iVar4 = (**(code **)(*unaff_ESI + 0xc))(unaff_ESI,1,&stack0xffffffe8,0);
  } while( true );
}


