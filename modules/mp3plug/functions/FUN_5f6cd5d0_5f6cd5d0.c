/* Module: mp3plug.dll
   Function: FUN_5f6cd5d0
   Address: 5f6cd5d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_5f6cd5d0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if ((param_1 == 0xac44) || (param_1 == 48000)) {
    iVar1 = 64000;
  }
  else if (param_1 == 32000) {
    iVar1 = 48000;
  }
  else if ((param_1 == 0x5622) || (param_1 == 24000)) {
    iVar1 = 32000;
  }
  else if (param_1 == 16000) {
    iVar1 = 24000;
  }
  else if ((param_1 == 0x2b11) || (param_1 == 12000)) {
    iVar1 = 16000;
  }
  else if (param_1 == 8000) {
    iVar1 = 8000;
  }
  return iVar1 * param_2;
}


