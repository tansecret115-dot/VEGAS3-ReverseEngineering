/* Module: vegas30k.dll
   Function: FUN_011a9c20
   Address: 011a9c20
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_011a9c20(int param_1)

{
  int iVar1;
  int iVar2;
  HGLOBAL hMem;
  LPVOID pvVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *unaff_EBX;
  int *unaff_EBP;
  int *unaff_ESI;
  undefined4 *local_10;
  undefined4 local_c;
  
  _mbscpy((uchar *)(param_1 + 0x4fc),(uchar *)"Hardware Mixer");
  piVar4 = *(int **)(param_1 + 0x664);
  *(undefined4 *)(param_1 + 0x604) = 2;
  *(undefined4 *)(param_1 + 0x608) = 0;
  *(undefined4 *)(param_1 + 0x60c) = 0;
  *(undefined4 *)(param_1 + 0x610) = 0;
  local_10 = (undefined4 *)0x0;
  local_c = 0;
  if (piVar4 == (int *)0x0) {
    piVar4 = *(int **)(param_1 + 0x668);
    if (piVar4 == (int *)0x0) {
      iVar2 = (**(code **)(**(int **)(param_1 + 0x66c) + 0x14))(*(int **)(param_1 + 0x66c));
      if (iVar2 < 0) {
        return iVar2;
      }
      iVar2 = (**(code **)(**(int **)(param_1 + 0x66c) + 0x68))
                        (*(int **)(param_1 + 0x66c),&stack0xffffffec);
    }
    else {
      iVar2 = (**(code **)(*piVar4 + 0x20))(piVar4);
      if (iVar2 < 0) {
        return iVar2;
      }
      iVar2 = (**(code **)(**(int **)(param_1 + 0x668) + 100))
                        (*(int **)(param_1 + 0x668),&stack0xffffffec);
    }
  }
  else {
    iVar2 = (**(code **)(*piVar4 + 0x58))(piVar4,&local_10);
  }
  local_c = 0;
  if (iVar2 < 0) {
LAB_011a9df8:
    iVar1 = *(int *)(param_1 + 0x674);
    while (iVar1 != 0) {
      (**(code **)(*(int *)**(undefined4 **)(param_1 + 0x674) + 8))
                ((int *)**(undefined4 **)(param_1 + 0x674));
      iVar1 = *(int *)((int)*(void **)(param_1 + 0x674) + 0x18);
      free(*(void **)(param_1 + 0x674));
      *(int *)(param_1 + 0x674) = iVar1;
    }
    return iVar2;
  }
  local_10 = *(undefined4 **)(param_1 + 0x674);
  iVar2 = (**(code **)(*unaff_EBP + 0xc))(unaff_EBP,1,&stack0xffffffec,0);
  do {
    if (iVar2 != 0) {
      (**(code **)(*unaff_EBP + 8))(unaff_EBP);
      *(undefined4 *)(param_1 + 0x4a4) = 1;
      return 0;
    }
    hMem = GlobalAlloc(0x40,0x8d8);
    pvVar3 = GlobalLock(hMem);
    if ((pvVar3 == (LPVOID)0x0) || (piVar4 = (int *)FUN_011be230(param_1), piVar4 == (int *)0x0)) {
      iVar2 = -0x7ff8fff2;
      goto LAB_011a9df8;
    }
    iVar2 = FUN_011be440(unaff_EBX);
    if (iVar2 != 0) {
      puVar5 = calloc(1,0x1c);
      if (puVar5 == (undefined4 *)0x0) {
        iVar2 = -0x7ff8fff2;
        (**(code **)(*unaff_EBX + 8))(unaff_EBX);
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 0x118))(1);
        }
        goto LAB_011a9df8;
      }
      *puVar5 = piVar4;
      (**(code **)(*piVar4 + 4))(piVar4);
      puVar5[1] = piVar4;
      puVar5[2] = 3;
      puVar5[3] = 0;
      puVar5[4] = 0;
      puVar5[5] = 0;
      puVar5[6] = 0;
      if (*(int *)(param_1 + 0x674) == 0) {
        *(undefined4 **)(param_1 + 0x674) = puVar5;
      }
      else {
        unaff_EBX[6] = (int)puVar5;
      }
      (**(code **)(*piVar4 + 0x40))(piVar4,param_1 + 0x4ac);
      (**(code **)(*piVar4 + 0x90))(piVar4,0xf,&stack0xffffffe8);
      (**(code **)(*piVar4 + 0x90))(piVar4,0x40,param_1 + 0x20);
      *(int *)(param_1 + 0x67c) = *(int *)(param_1 + 0x67c) + 1;
      local_10 = puVar5;
    }
    (**(code **)(*unaff_EBX + 8))(unaff_EBX);
    iVar2 = (**(code **)(*unaff_ESI + 0xc))(unaff_ESI,1,&stack0xffffffe8,0);
  } while( true );
}


