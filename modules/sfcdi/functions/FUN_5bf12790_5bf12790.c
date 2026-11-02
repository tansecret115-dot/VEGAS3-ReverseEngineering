/* Module: sfcdi.dll
   Function: FUN_5bf12790
   Address: 5bf12790
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf12790(LPSTR param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  CHAR local_28 [40];
  
  lstrcatA(param_1,"# Track frame offsets:\r\n");
  uVar1 = FUN_5bf2bb90(param_2);
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      iVar2 = FUN_5bf2bbb0(param_2,uVar3);
      wsprintfA(local_28,"#     %d\r\n",*(undefined4 *)(iVar2 + 0x14));
      lstrcatA(param_1,local_28);
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  FUN_5bf2bbb0(param_2,0);
  wsprintfA(local_28,"# Disc length: %d seconds\r\n",*(uint *)(param_2 + 0x1d8c) / 0x4b);
  lstrcatA(param_1,local_28);
  return 0;
}


