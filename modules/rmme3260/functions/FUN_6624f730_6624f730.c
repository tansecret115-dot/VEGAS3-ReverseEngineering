/* Module: rmme3260.dll
   Function: FUN_6624f730
   Address: 6624f730
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_6624f730(char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    cVar1 = *param_1;
    if ((uint)(int)cVar1 < 0x3a) {
      iVar2 = -0x30;
    }
    else {
      iVar2 = -0x37;
    }
    param_1 = param_1 + 1;
    uVar3 = uVar3 << 4 | cVar1 + iVar2;
  }
  return uVar3;
}


