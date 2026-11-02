/* Module: mp3plug.dll
   Function: FUN_5f6ff320
   Address: 5f6ff320
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f6ff320(ushort param_1,ushort param_2,ushort param_3,int param_4,int *param_5)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_4) {
    do {
      iVar3 = iVar3 + 1;
      uVar1 = param_3 & param_1;
      uVar2 = FUN_5f6e5f50(param_5,1);
      param_1 = param_1 * 2;
      if (((uVar2 ^ uVar1 != 0) & 0xffff) != 0) {
        param_1 = param_1 ^ param_2;
      }
    } while (iVar3 < param_4);
  }
  return;
}


