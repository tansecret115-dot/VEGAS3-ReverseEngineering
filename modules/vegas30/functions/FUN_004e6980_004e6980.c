/* Module: vegas30.exe
   Function: FUN_004e6980
   Address: 004e6980
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_004e6980(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 *param_6)

{
  HGDIOBJ ho;
  HBITMAP pHVar1;
  
  ho = *(HGDIOBJ *)(param_1 + 0xe38);
  if (((ho == (HGDIOBJ)0x0) || (param_2 != *(int *)(param_1 + 0xe30))) ||
     (param_3 != *(int *)(param_1 + 0xe34))) {
    if (ho != (HGDIOBJ)0x0) {
      DeleteObject(ho);
      *(undefined4 *)(param_1 + 0xe38) = 0;
    }
    *(int *)(param_1 + 0xe30) = param_2;
    *(int *)(param_1 + 0xe34) = param_3;
    *(undefined4 *)(param_1 + 0xe3c) = 0x7fff;
    *(undefined4 *)(param_1 + 0xe40) = 0;
    pHVar1 = CreateBitmap(param_2,param_3,1,1,(void *)0x0);
    *(HBITMAP *)(param_1 + 0xe38) = pHVar1;
    *param_6 = pHVar1;
  }
  else {
    *param_6 = ho;
    if ((((*(int *)(param_1 + 0xe44) != 0) ||
         (*(double *)(param_1 + 0xba0) != *(double *)(param_1 + 0xe28))) ||
        ((*(int *)(param_1 + 0xb88) != *(int *)(param_1 + 0xe20) ||
         ((*(int *)(param_1 + 0xb8c) != *(int *)(param_1 + 0xe24) ||
          ((uint)*(ushort *)(param_1 + 0xdaa) != *(uint *)(param_1 + 0xe6c))))))) ||
       (*(int *)(param_1 + 0x678) != *(int *)(param_1 + 0xe68))) {
      *(undefined4 *)(param_1 + 0xe3c) = 0x7fff;
      *(undefined4 *)(param_1 + 0xe40) = 0;
      return 0;
    }
    if ((*(int *)(param_1 + 0xe3c) <= param_4) && (param_5 <= *(int *)(param_1 + 0xe40))) {
      return 1;
    }
  }
  return 0;
}


