/* Module: g2plug.dll
   Function: FUN_5f8655f0
   Address: 5f8655f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f8655f0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uStack_640;
  undefined4 uStack_63c;
  undefined1 *puStack_638;
  undefined4 uStack_634;
  CHAR aCStack_53c [19];
  undefined1 uStack_529;
  undefined1 uStack_439;
  WCHAR aWStack_424 [10];
  undefined1 local_410 [480];
  WCHAR aWStack_230 [280];
  
  puStack_638 = local_410;
  uStack_634 = 0x104;
  piVar1 = *(int **)(param_1 + 8);
  uStack_63c = *(undefined4 *)(param_1 + 0x24);
  uStack_640 = *(undefined4 *)(param_1 + 0x1c);
  (**(code **)(*piVar1 + 0x80))();
  if ((&stack0x00000000 == (undefined1 *)0x424) || (aWStack_424[0] != L'\0')) {
    WideCharToMultiByte(0,0,aWStack_424,-1,&stack0xfffff9d4,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
  }
  uStack_634 = *(undefined4 *)(param_1 + 0x18);
  puVar4 = &uStack_634;
  uStack_529 = 0;
  iVar2 = (**(code **)(**(int **)(param_1 + 0xc) + 0xc))
                    (*(int **)(param_1 + 0xc),*(undefined4 *)(param_1 + 4));
  if (iVar2 < 0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 0x2c))
              (*(int **)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14),&stack0xfffff9b8);
    (**(code **)(**(int **)(param_1 + 4) + 0x38))(*(int **)(param_1 + 4),&stack0xfffff9b0);
    iVar2 = 0;
    if (0 < (int)piVar1) {
      do {
        (**(code **)(**(int **)(param_1 + 4) + 0x3c))
                  (*(int **)(param_1 + 4),iVar2,aWStack_230,0x104);
        if ((&stack0x00000000 == (undefined1 *)0x230) || (aWStack_230[0] != L'\0')) {
          WideCharToMultiByte(0,0,aWStack_230,-1,aCStack_53c,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
        }
        else if (&stack0x00000000 != (undefined1 *)0x53c) {
          aCStack_53c[0] = '\0';
        }
        uStack_439 = 0;
        iVar3 = lstrcmpA(aCStack_53c,(LPCSTR)&uStack_640);
        if (iVar3 == 0) goto LAB_5f865767;
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)piVar1);
    }
    (**(code **)(**(int **)(param_1 + 0xc) + 0x10))
              (*(int **)(param_1 + 0xc),*(undefined4 *)(param_1 + 4),&uStack_640,
               *(undefined4 *)(param_1 + 0x14),puVar4);
  }
LAB_5f865767:
  (**(code **)(**(int **)(param_1 + 0xc) + 0x24))
            (*(int **)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14),puVar4);
  return;
}


