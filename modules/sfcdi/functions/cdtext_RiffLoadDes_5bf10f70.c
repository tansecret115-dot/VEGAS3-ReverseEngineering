/* Module: sfcdi.dll
   Function: cdtext_RiffLoadDes
   Address: 5bf10f70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cdtext_RiffLoadDes(void *,struct _cdtexttrkfield *,long *) */

long cdtext_RiffLoadDes(void *param_1,_cdtexttrkfield *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  _cdtexttrkfield *p_Var3;
  long local_b4;
  uint local_b0;
  uint local_ac;
  DWORD local_a8;
  uint local_a4;
  _cdtexttrkfield local_a0 [160];
  
                    /* 0x10f70  226  ?cdtext_RiffLoadDes@@YGJPAXPAU_cdtexttrkfield@@PAJ@Z */
  local_b4 = *param_3;
  FUN_5bf33d00(param_1,&local_a8);
  uVar1 = FUN_5bf345d0(param_1,(int *)&local_b0,&local_b4);
  if (uVar1 == 0) {
    if (local_b0 != 0) {
      FUN_5bf33d20(param_1,local_a8);
      local_b4 = *param_3;
      uVar1 = 0;
      if (local_b0 != 0) {
        do {
          uVar2 = FUN_5bf34190(param_1,&local_a4,&local_ac);
          local_b4 = local_b4 + -8;
          if ((int)uVar2 < 0) {
            return uVar2;
          }
          if (local_a4 < 0x4753534e) {
            if (local_a4 == 0x4753534d) {
              p_Var3 = param_2 + 0x338;
              *(undefined4 *)(param_2 + 0x334) = 1;
            }
            else if (local_a4 == 0x43525349) {
              p_Var3 = param_2 + 0x3dc;
              *(undefined4 *)(param_2 + 0x3d8) = 1;
            }
            else if (local_a4 == 0x46524550) {
              p_Var3 = param_2 + 0xa8;
              *(undefined4 *)(param_2 + 0xa4) = 1;
            }
            else {
              if (local_a4 != 0x474e5241) goto LAB_5bf110ab;
              p_Var3 = param_2 + 0x294;
              *(undefined4 *)(param_2 + 0x290) = 1;
            }
LAB_5bf1109b:
            if (p_Var3 == (_cdtexttrkfield *)0x0) goto LAB_5bf110ab;
          }
          else {
            if (local_a4 == 0x4c544954) {
              p_Var3 = param_2 + 4;
              *(undefined4 *)param_2 = 1;
              goto LAB_5bf1109b;
            }
            if (local_a4 == 0x504d4f43) {
              p_Var3 = param_2 + 0x1f0;
              *(undefined4 *)(param_2 + 0x1ec) = 1;
              goto LAB_5bf1109b;
            }
            if (local_a4 == 0x54495257) {
              p_Var3 = param_2 + 0x14c;
              *(undefined4 *)(param_2 + 0x148) = 1;
              goto LAB_5bf1109b;
            }
LAB_5bf110ab:
            p_Var3 = local_a0;
          }
          FUN_5bf356c0(param_1,(uchar *)p_Var3,0xa0,&local_ac);
          local_b4 = local_b4 - local_ac;
          uVar1 = uVar1 + 1;
        } while (uVar1 < local_b0);
      }
      *param_3 = local_b4;
    }
    uVar1 = 0;
  }
  return uVar1;
}


