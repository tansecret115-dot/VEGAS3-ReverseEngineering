/* Module: mp3plug.dll
   Function: FUN_5f6ffc80
   Address: 5f6ffc80
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f6ffc80(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  
  iVar1 = *param_1;
  bVar3 = iVar1 < 0;
  if (bVar3) {
    iVar1 = -iVar1;
  }
  iVar2 = param_1[1];
  bVar4 = iVar2 < 0;
  if (bVar4) {
    iVar2 = -iVar2;
  }
  (**(code **)(&DAT_5f74a100 + param_2 * 8))
            (iVar1,bVar3,iVar2,bVar4,*(undefined4 *)(&DAT_5f74a104 + param_2 * 8),param_3);
  return;
}


