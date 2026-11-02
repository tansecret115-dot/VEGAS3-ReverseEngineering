/* Module: mp3plug.dll
   Function: FUN_5f70bf70
   Address: 5f70bf70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f70bf70(ushort param_1,ushort param_2,uint *param_3,byte param_4)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  
  iVar3 = -8;
  do {
    uVar1 = *param_3;
    bVar2 = param_4 & 0x80;
    param_4 = param_4 * '\x02';
    *param_3 = uVar1 * 2;
    if ((bVar2 != 0) != ((param_2 & uVar1) != 0)) {
      *param_3 = *param_3 ^ (uint)param_1;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0);
  return;
}


