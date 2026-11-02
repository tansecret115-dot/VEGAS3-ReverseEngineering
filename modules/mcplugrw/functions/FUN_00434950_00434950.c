/* Module: mcplugrw.dll
   Function: FUN_00434950
   Address: 00434950
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00434950(char *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  FILE *local_18;
  int local_14;
  int *local_10;
  uint *local_c;
  int *local_8;
  
  iVar6 = param_4[1];
  local_10 = (int *)0x0;
  local_8 = (int *)0x0;
  local_c = (uint *)0x0;
  local_18 = (FILE *)0x0;
  iVar1 = FUN_004401f0(&local_10,*param_4,param_2[1],param_2[2],(uint *)0x0,0,0);
  if (((-1 < iVar1) &&
      (iVar1 = FUN_00444110(local_10,(int *)0x0,(uint *)0x0,0,param_2,param_3,(uint *)0x0,0,3),
      -1 < iVar1)) &&
     (iVar1 = FUN_00445320(local_10,(int *)(*local_10 + local_10[8] * 4 + (int)local_10),(RECT *)0x0
                           ,0), -1 < iVar1)) {
    local_8 = FUN_0044cbb0("1.0.2",0,0,0);
    if (local_8 == (int *)0x0) {
      iVar1 = -0x7fffbffb;
    }
    else {
      local_c = FUN_0044c5a0((int)local_8);
      if (local_c == (uint *)0x0) {
        iVar1 = -0x7fffbffb;
      }
      else {
        iVar1 = setjmp3(local_8,0);
        if (iVar1 == 0) {
          local_18 = fopen(param_1,"wb+");
          if (local_18 == (FILE *)0x0) {
            iVar1 = -0x7ffb1ffa;
          }
          else {
            FUN_0044c680((int)local_8,local_18);
            FUN_0044d1d0(local_8,0,0x98);
            FUN_0044d5e0((int)local_8,9);
            FUN_0044d7e0((int)local_8,local_c,local_10[1],local_10[2],'\b',6,iVar6 != 0,0,0);
            FUN_0044c800(local_8,(int *)local_c);
            FUN_0044cf80((int)local_8);
            local_14 = FUN_00447c90((int)local_8);
            uVar2 = (uint)*(ushort *)((int)local_10 + 0xe) * local_10[1] + 0x1f;
            iVar6 = (int)((uVar2 & 0xffffffe0) + ((int)uVar2 >> 0x1f & 7U)) >> 3;
            piVar4 = local_10;
            if (0 < local_14) {
              do {
                iVar1 = piVar4[2];
                if (-1 < iVar1 + -1) {
                  iVar5 = (iVar1 + -1) * iVar6;
                  do {
                    FUN_0044cd80(local_8,(undefined4 *)
                                         (*piVar4 + piVar4[8] * 4 + iVar5 + (int)piVar4));
                    iVar5 = iVar5 - iVar6;
                    iVar1 = iVar1 + -1;
                    piVar4 = local_10;
                  } while (iVar1 != 0);
                }
                local_14 = local_14 + -1;
              } while (local_14 != 0);
            }
            FUN_0044ca90(local_8,0);
            iVar1 = 0;
          }
        }
        else {
          iVar1 = -0x7fffbffb;
        }
      }
    }
  }
  if (local_10 != (int *)0x0) {
    FUN_00440190(local_10,0);
    local_10 = (int *)0x0;
  }
  puVar3 = (undefined4 *)(-(uint)(local_8 != (int *)0x0) & (uint)&local_8);
  if (puVar3 != (undefined4 *)0x0) {
    FUN_0044d060(puVar3,(undefined4 *)(-(uint)(local_c != (uint *)0x0) & (uint)&local_c));
  }
  local_8 = (int *)0x0;
  local_c = (uint *)0x0;
  if (local_18 != (FILE *)0x0) {
    fclose(local_18);
  }
  return iVar1;
}


