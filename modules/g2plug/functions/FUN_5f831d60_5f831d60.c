/* Module: g2plug.dll
   Function: FUN_5f831d60
   Address: 5f831d60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f831d60(HDC param_1,undefined4 *param_2)

{
  int iVar1;
  RECT local_10;
  
  if (((byte)*param_2 & 5) == 5) {
    iVar1 = param_2[4];
    local_10.left = param_2[iVar1 * 0xe + 0x56] + 1;
    local_10.top = param_2[iVar1 * 0xe + 0x57] + 1;
    local_10.right = param_2[iVar1 * 0xe + 0x58] + -1;
    local_10.bottom = param_2[iVar1 * 0xe + 0x59] + -1;
    DrawFocusRect(param_1,&local_10);
  }
  return;
}


