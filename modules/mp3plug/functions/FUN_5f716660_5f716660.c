/* Module: mp3plug.dll
   Function: FUN_5f716660
   Address: 5f716660
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5f716660(void *this,int param_1,int param_2,int param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  int local_38;
  int local_34;
  int local_1c;
  uint local_18;
  
  iVar2 = 0x20 >> ((byte)*(undefined4 *)((int)this + 0x12dc) & 0x1f);
  local_34 = iVar2;
  if (*(int *)(param_2 + 0x68) + 1 <= iVar2) {
    local_34 = *(int *)(param_2 + 0x68) + 1;
  }
  if ((*(int *)(*(int *)((int)this + 0xd8) + 0x18) == 2) &&
     (*(int *)(*(int *)((int)this + 0xd8) + 4) == 2)) {
    local_38 = 4;
  }
  else {
    local_38 = 2;
  }
  local_18 = 0;
  if (0 < iVar2) {
    iVar2 = param_1 * 0x900;
    do {
      if (((*(int *)(param_2 + 0x10) == 0) || (*(int *)(param_2 + 0x18) == 0)) ||
         (local_38 <= (int)local_18)) {
        iVar3 = *(int *)(param_2 + 0x14);
      }
      else {
        iVar3 = 0;
      }
      if ((int)local_18 < local_34) {
        if (iVar3 == 2) {
          iVar3 = iVar2 + local_18 * 0x48;
          pfVar5 = (float *)(iVar3 + param_3);
          *(undefined4 *)this = 0;
          *(undefined4 *)((int)this + 4) = 0;
          *(undefined4 *)((int)this + 8) = 0;
          *(undefined4 *)((int)this + 0xc) = 0;
          *(undefined4 *)((int)this + 0x10) = 0;
          *(undefined4 *)((int)this + 0x14) = 0;
          *(undefined4 *)((int)this + 0x18) = 0;
          *(undefined4 *)((int)this + 0x1c) = 0;
          *(undefined4 *)((int)this + 0x20) = 0;
          *(undefined4 *)((int)this + 0x24) = 0;
          *(undefined4 *)((int)this + 0x28) = 0;
          *(undefined4 *)((int)this + 0x2c) = 0;
          *(undefined4 *)((int)this + 0x30) = 0;
          *(undefined4 *)((int)this + 0x34) = 0;
          *(undefined4 *)((int)this + 0x38) = 0;
          *(undefined4 *)((int)this + 0x3c) = 0;
          *(undefined4 *)((int)this + 0x40) = 0;
          *(undefined4 *)((int)this + 0x44) = 0;
          *(undefined4 *)((int)this + 0x48) = 0;
          *(undefined4 *)((int)this + 0x4c) = 0;
          *(undefined4 *)((int)this + 0x50) = 0;
          *(undefined4 *)((int)this + 0x54) = 0;
          *(undefined4 *)((int)this + 0x58) = 0;
          *(undefined4 *)((int)this + 0x5c) = 0;
          *(undefined4 *)((int)this + 0x60) = 0;
          *(undefined4 *)((int)this + 100) = 0;
          *(undefined4 *)((int)this + 0x68) = 0;
          *(undefined4 *)((int)this + 0x6c) = 0;
          *(undefined4 *)((int)this + 0x70) = 0;
          *(undefined4 *)((int)this + 0x74) = 0;
          *(undefined4 *)((int)this + 0x78) = 0;
          *(undefined4 *)((int)this + 0x7c) = 0;
          *(undefined4 *)((int)this + 0x80) = 0;
          *(undefined4 *)((int)this + 0x84) = 0;
          *(undefined4 *)((int)this + 0x88) = 0;
          *(undefined4 *)((int)this + 0x8c) = 0;
          pfVar6 = (float *)((int)this + 0x18);
          pfVar7 = pfVar5;
          do {
            FUN_5f716974(pfVar7,pfVar6,(float *)0x5f7651b0);
            pfVar6 = pfVar6 + 6;
            pfVar7 = pfVar7 + 1;
          } while ((int)pfVar6 < (int)this + 0x60);
          iVar4 = -0x12;
          do {
            pfVar5[iVar4 + 0x12] =
                 *(float *)((int)this + iVar4 * 4 + iVar3 + 0x124) +
                 *(float *)((int)this + iVar4 * 4 + 0x48);
            fVar1 = *(float *)((int)this + iVar4 * 4 + iVar3 + 0x128);
            *(undefined4 *)((int)this + iVar4 * 4 + iVar3 + 0x124) =
                 *(undefined4 *)((int)this + iVar4 * 4 + 0x90);
            pfVar5[iVar4 + 0x13] = fVar1 + *(float *)((int)this + iVar4 * 4 + 0x4c);
            *(undefined4 *)((int)this + iVar4 * 4 + iVar3 + 0x128) =
                 *(undefined4 *)((int)this + iVar4 * 4 + 0x94);
            iVar4 = iVar4 + 2;
          } while (iVar4 != 0);
        }
        else {
          iVar4 = iVar2 + local_18 * 0x48;
          FUN_5f716af4(this,(float *)((int)this + iVar4 + 0xdc),(float *)(iVar4 + param_3),
                       (float *)(&DAT_5f765090 + iVar3 * 0x90));
        }
      }
      else {
        iVar3 = local_18 * 0x48;
        do {
          iVar4 = iVar3 + iVar2;
          iVar3 = iVar3 + 4;
          *(undefined4 *)(param_3 + iVar4) = *(undefined4 *)((int)this + iVar4 + 0xdc);
          *(undefined4 *)((int)this + iVar4 + 0xdc) = 0;
        } while (iVar3 < (int)(local_18 * 0x48 + 0x48));
      }
      local_1c = local_18 * 0x48;
      if ((local_18 & 1) != 0) {
        iVar3 = local_1c + 4;
        do {
          iVar4 = iVar3 + iVar2;
          iVar3 = iVar3 + 8;
          *(float *)(param_3 + iVar4) = -*(float *)(param_3 + iVar4);
        } while (iVar3 < local_1c + 0x48);
      }
      local_18 = local_18 + 1;
    } while ((int)local_18 < 0x20 >> ((byte)*(undefined4 *)((int)this + 0x12dc) & 0x1f));
  }
  return;
}


