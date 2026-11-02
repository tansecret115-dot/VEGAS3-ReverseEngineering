/* Module: sfcdi.dll
   Function: VCD_GetMpegFrameCount
   Address: 5bf1ee80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall VCD_GetMpegFrameCount(char *,unsigned int *) */

long VCD_GetMpegFrameCount(char *param_1,uint *param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
                    /* 0x1ee80  144  ?VCD_GetMpegFrameCount@@YGJPADPAI@Z */
  lVar1 = FUN_5bf3be50(&local_20,param_1);
  if (-1 < lVar1) {
    uVar3 = 0;
    while (iVar2 = FUN_5bf3bd40(&local_20), -1 < iVar2) {
      switch(local_1c) {
      case 0x1ba:
        uVar3 = uVar3 + 1;
        break;
      case 0x1bb:
      case 0x1be:
      case 0x1c0:
      case 0x1e0:
        iVar2 = FUN_5bf3bc40(&local_20,&param_1,2,&local_24);
        if (-1 < iVar2) {
          FUN_5bf3cd90((undefined1 *)&param_1,1);
          FUN_5bf3bbd0(&local_20,(uint)param_1 & 0xffff);
        }
      }
    }
    FUN_5bf3bdf0(&local_20);
    *param_2 = uVar3;
    lVar1 = 0;
  }
  return lVar1;
}


