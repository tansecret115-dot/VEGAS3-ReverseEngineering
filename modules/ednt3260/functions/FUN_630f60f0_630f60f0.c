/* Module: ednt3260.dll
   Function: FUN_630f60f0
   Address: 630f60f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_630f60f0(int param_1)

{
  int iVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  undefined4 local_8;
  
  iVar4 = 0;
  local_8 = 6;
  do {
    sVar3 = 0;
    if (0 < *(short *)(param_1 + 0x6344)) {
      do {
        iVar2 = (int)sVar3;
        iVar1 = iVar4 + iVar2;
        if ((*(short *)(param_1 + 0x6348 + iVar1 * 2) == 0) &&
           (*(short *)(param_1 + 0x1894 + iVar2 * 2) == 0)) {
          *(undefined2 *)(param_1 + 0x6384 + iVar1 * 2) = 1;
        }
        else {
          *(undefined2 *)(param_1 + 0x6384 + iVar1 * 2) = 0;
        }
        sVar3 = sVar3 + 1;
        *(undefined2 *)(param_1 + 0x1894 + iVar2 * 2) =
             *(undefined2 *)(param_1 + 0x6348 + iVar1 * 2);
      } while (sVar3 < *(short *)(param_1 + 0x6344));
    }
    iVar4 = iVar4 + 5;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return;
}


