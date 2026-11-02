/* Module: vidcap30.exe
   Function: FUN_00432ae0
   Address: 00432ae0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00432ae0(int param_1,undefined4 param_2)

{
  int iVar1;
  int nHeight;
  
  nHeight = (int)(short)((uint)param_2 >> 0x10);
  if (((byte)*(undefined4 *)(param_1 + 0xc) & 3) == 3) {
    iVar1 = GetSystemMetrics(0x2e);
    nHeight = nHeight + iVar1;
  }
  MoveWindow(*(HWND *)(param_1 + 0x184),0,0,(int)(short)param_2,nHeight,1);
  return;
}


