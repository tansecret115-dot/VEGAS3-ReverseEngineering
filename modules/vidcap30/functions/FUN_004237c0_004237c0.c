/* Module: vidcap30.exe
   Function: FUN_004237c0
   Address: 004237c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_004237c0(int param_1)

{
  int iVar1;
  LPCSTR lpMultiByteStr;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puStack_254;
  int iStack_250;
  undefined4 *puStack_24c;
  undefined4 *puStack_248;
  undefined4 **ppuStack_244;
  undefined4 *local_230 [126];
  undefined2 uStack_36;
  
  ppuStack_244 = local_230;
  puStack_248 = (undefined4 *)0x0;
  local_230[0] = (undefined4 *)0x0;
  puStack_24c = (undefined4 *)0x4237e0;
  puVar2 = (undefined4 *)FUN_0046b160();
  puVar3 = local_230[0];
  if (-1 < (int)local_230[0]) {
    puStack_248 = &DAT_005a1ca8;
    iStack_250 = 0x423802;
    puStack_24c = puVar2;
    ppuStack_244 = (undefined4 **)(param_1 + 0x32c);
    puVar3 = (undefined4 *)(**(code **)*puVar2)();
    if (-1 < (int)puVar3) {
      iStack_250 = param_1 + 0x334;
      puStack_254 = (undefined4 *)&DAT_0058a1d8;
      puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
      if (((-1 < (int)puVar3) &&
          (puStack_248 = puVar3,
          puVar3 = (undefined4 *)
                   (**(code **)(**(int **)(param_1 + 0x350) + 0xc))
                             (*(int **)(param_1 + 0x350),*(undefined4 *)(param_1 + 0x32c),
                              L"SF:SF File Reader"), -1 < (int)puVar3)) &&
         (puStack_254 = puVar3,
         puVar3 = (undefined4 *)
                  (**(code **)(**(int **)(param_1 + 0x334) + 0x14))
                            (*(int **)(param_1 + 0x334),DAT_005bba6c), -1 < (int)puVar3)) {
        if ((*(int **)(param_1 + 0x338) == (int *)0x0) ||
           (iVar1 = **(int **)(param_1 + 0x338), iVar1 < 1)) {
          return (undefined4 *)-0x7ff8fffa;
        }
        iVar4 = 0;
        if (0 < iVar1) {
          do {
            lpMultiByteStr = *(LPCSTR *)(*(int *)(*(int *)(param_1 + 0x338) + 8) + iVar4 * 4);
            if (lpMultiByteStr != (LPCSTR)0x0) {
              MultiByteToWideChar(0,1,lpMultiByteStr,-1,(LPWSTR)&stack0xfffffdc4,0x104);
              uStack_36 = 0;
              puStack_248 = (undefined4 *)0x0;
              ppuStack_244 = (undefined4 **)0x0;
              puStack_254 = (undefined4 *)0x0;
              iStack_250 = 0;
              puVar3 = (undefined4 *)
                       (**(code **)(**(int **)(param_1 + 0x334) + 0xc))
                                 (*(int **)(param_1 + 0x334),&stack0xfffffdc4,&puStack_248,
                                  &puStack_254);
              if ((int)puVar3 < 0) {
                *(uint *)(lpMultiByteStr + 0x118) = *(uint *)(lpMultiByteStr + 0x118) | 2;
              }
              else {
                *(undefined4 **)(lpMultiByteStr + 0x108) = puStack_248;
                *(undefined4 **)(lpMultiByteStr + 0x110) = puStack_254;
                *(undefined4 ***)(lpMultiByteStr + 0x10c) = ppuStack_244;
                *(int *)(lpMultiByteStr + 0x114) = iStack_250;
              }
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < iVar1);
          return puVar3;
        }
      }
    }
  }
  return puVar3;
}


