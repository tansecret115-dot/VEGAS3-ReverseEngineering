/* Module: vidcap30.exe
   Function: FUN_00422500
   Address: 00422500
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00422500(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  WCHAR aWStack_230 [4];
  undefined2 uStack_228;
  undefined4 auStack_226 [55];
  int *piStack_148;
  undefined4 uStack_140;
  int *piStack_130;
  int *piStack_124;
  undefined4 uStack_11c;
  undefined4 auStack_118 [70];
  
  if (*(int **)(param_1 + 1000) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 1000) + 8))();
    *(undefined4 *)(param_1 + 1000) = 0;
  }
  piVar4 = *(int **)(param_1 + 0x3f0);
  (**(code **)(*piVar4 + 0x24))();
  if (*(int **)(param_1 + 0x3f4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x3f4) + 0xc))();
  }
  piVar1 = *(int **)(param_1 + 0x808);
  *(undefined4 *)(param_1 + 0x3f4) = 0;
  (**(code **)(*piVar1 + 0x18))();
  if (piVar4 != (int *)0x0) {
    uStack_11c = 0;
    puVar3 = auStack_118;
    for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    iVar2 = (**(code **)(*piVar4 + 0x20))(piVar4,&uStack_11c);
    if (-1 < iVar2) {
      FUN_00421fa0(param_1,piStack_124);
      uStack_228 = 0;
      puVar3 = auStack_226;
      for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      *(undefined2 *)puVar3 = 0;
      (**(code **)(*piStack_124 + 0x30))(piStack_124,&uStack_228);
      if ((&stack0x00000000 == (undefined1 *)0x230) || (aWStack_230[0] != L'\0')) {
        WideCharToMultiByte(0,0,aWStack_230,-1,&stack0xfffffd50,0x80,(LPCSTR)0x0,(LPBOOL)0x0);
      }
      (**(code **)(*piStack_130 + 8))(piStack_130);
      (**(code **)(**(int **)(param_1 + 0x350) + 0x24))(*(int **)(param_1 + 0x350),piVar4);
      (**(code **)(**(int **)(param_1 + 0x350) + 0x24))
                (*(int **)(param_1 + 0x350),*(undefined4 *)(param_1 + 0x808));
      (**(code **)(**(int **)(param_1 + 0x350) + 0x10))(*(int **)(param_1 + 0x350),uStack_140);
      (**(code **)(*piStack_148 + 8))(piStack_148);
    }
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if (*(int **)(param_1 + 0x3f0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x3f0) + 8))();
  }
  *(undefined4 *)(param_1 + 0x3f0) = 0;
  if (*(int **)(param_1 + 0x3ec) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x3ec) + 8))();
  }
  *(undefined4 *)(param_1 + 0x3ec) = 0;
  return;
}


