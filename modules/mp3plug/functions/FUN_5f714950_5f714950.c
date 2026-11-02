/* Module: mp3plug.dll
   Function: FUN_5f714950
   Address: 5f714950
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall
FUN_5f714950(void *this,float *param_1,int param_2,uint *param_3,int param_4,char *param_5,
            int *param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  void *pvVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined4 *local_30;
  int local_2c;
  int local_28;
  int local_24;
  float *local_1c;
  
  if (*(int *)((int)this + 0xc160) == 0) {
    iVar9 = *(int *)(*(int *)((int)this + 0x8640) + 0x70);
  }
  else {
    iVar9 = 1;
  }
  iVar2 = *(int *)((int)this + 0x8640);
  if (*(int *)(iVar2 + 0x3c) == 3) {
    if (param_4 == 0) {
      iVar2 = FUN_5f715a20(iVar2 + 0x2c);
      uVar11 = (iVar2 << ((byte)iVar9 & 0x1f)) >>
               ((char)*(undefined4 *)((int)this + 0xc158) +
                (char)*(undefined4 *)((int)this + 0xc15c) & 0x1fU);
    }
    else {
      iVar2 = FUN_5f715a20(iVar2 + 0x2c);
      uVar11 = (uint)(iVar2 * 4 * iVar9) >> ((byte)*(undefined4 *)((int)this + 0xc158) & 0x1f);
    }
    if (param_2 < (int)uVar11) {
      return 0xc1010003;
    }
    if (*(int *)(*(int *)((int)this + 0x8640) + 0x40) == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = 0x10;
    }
    iVar9 = iVar9 + 0x20;
    iVar2 = *(int *)((int)this + 0x8640);
    if (iVar9 != 0) {
      *(int *)(iVar2 + 0x18) = *(int *)(iVar2 + 0x18) + iVar9;
      *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) - iVar9;
      *(uint *)(iVar2 + 0x1c) = iVar9 + *(int *)(iVar2 + 0x1c) & *(int *)(iVar2 + 0xc) - 1U;
    }
    FUN_5f715654((int)this);
    uVar3 = FUN_5f719ec0((void *)((int)this + 0x861c),*(void **)((int)this + 0x8640),
                         (uint *)((int)this + 0x8670),(void *)((int)this + 0x861c));
    iVar9 = *(int *)((int)this + 0x865c);
    uVar4 = FUN_5f71a490(*(int *)((int)this + 0x8640),(void *)((int)this + 0x8644),
                         (int *)((int)this + 0x8670),(int *)((int)this + 0x861c));
    if (param_5 != (char *)0x0) {
      iVar9 = *(int *)((int)this + 0x865c) - iVar9;
      if (iVar9 != 0) {
        iVar2 = (int)(((uint)(iVar9 >> 2) >> 0x1d) + iVar9) >> 3;
        *param_6 = iVar2;
        if (iVar2 != 0) {
          iVar9 = FUN_5f71a5f0(param_5,(void *)((int)this + 0x8644),iVar9);
          *param_6 = iVar9;
        }
      }
    }
    if ((char)uVar4 == '\0') {
      local_1c = param_1;
      if (*(int *)((int)this + 0xc160) == 0) {
        local_28 = *(int *)(*(int *)((int)this + 0x8640) + 0x70);
      }
      else {
        local_28 = 1;
      }
      local_24 = 0;
      while( true ) {
        if (*(char *)((int)this + 0x863c) == '\0') {
          iVar9 = 1;
        }
        else {
          iVar9 = 2;
        }
        if (iVar9 <= local_24) break;
        iVar9 = 0;
        do {
          iVar2 = 0;
          do {
            iVar5 = iVar2;
            do {
              iVar12 = iVar5 + iVar9;
              iVar5 = iVar5 + 4;
              *(undefined4 *)((int)this + iVar12 + 0x9d58) = 0;
            } while (iVar5 < iVar2 + 0x48);
            iVar2 = iVar2 + 0x48;
          } while (iVar2 < 0x900);
          iVar9 = iVar9 + 0x900;
        } while (iVar9 < 0x1200);
        if (0 < local_28) {
          local_30 = (undefined4 *)((int)this + 0x9d58);
          local_2c = local_24 * 0x6c + 0x8688;
          pvVar10 = (void *)(local_24 * 0x6c + (int)this);
          iVar9 = 0;
          do {
            *(undefined4 *)((int)pvVar10 + 0x869c) = 0;
            *(undefined4 *)((int)pvVar10 + 0x86a0) = 0;
            *(undefined4 *)((int)pvVar10 + 0x8698) = 0;
            *(undefined4 *)((int)pvVar10 + 0x86f0) = 0;
            FUN_5f719b00((void *)((int)this + 0x2324),'\x01',(int)this + 0x861c,(int)this + 0x8670,
                         local_30,local_24,iVar9);
            FUN_5f716660((void *)((int)this + 0x30),iVar9,local_2c + (int)this,(int)this + 0x9d58);
            local_2c = local_2c + 0xe8;
            local_30 = local_30 + 0x240;
            iVar9 = iVar9 + 1;
            pvVar10 = (void *)((int)pvVar10 + 0xe8);
          } while (iVar9 < local_28);
        }
        if (*(int *)((int)this + 0xc160) == 0) {
          iVar9 = *(int *)(*(int *)((int)this + 0x8640) + 0x70);
        }
        else {
          iVar9 = 1;
        }
        if (0 < iVar9) {
          iVar2 = 0;
          do {
            iVar12 = 0;
            iVar5 = 0;
            do {
              iVar6 = 0;
              iVar8 = iVar5;
              do {
                iVar1 = iVar6 + iVar12 * 4;
                iVar6 = iVar6 + 0x48;
                iVar13 = iVar8 + iVar2;
                iVar8 = iVar8 + 4;
                *(undefined4 *)((int)this + iVar13 + 0xaf58) =
                     *(undefined4 *)((int)this + iVar1 + iVar2 + 0x9d58);
              } while (iVar6 < 0x900);
              iVar12 = iVar12 + 1;
              iVar5 = iVar5 + 0x80;
            } while (iVar12 < 0x12);
            iVar2 = iVar2 + 0x900;
          } while (iVar2 < iVar9 * 0x900);
        }
        if (param_4 == 0) {
          local_1c = (float *)FUN_5f717380((void *)((int)this + 0x1310),(int)this + 0xaf58,
                                           (int)local_1c);
        }
        else {
          local_1c = FUN_5f7183f0((void *)((int)this + 0x1310),(int)this + 0xaf58,local_1c);
        }
        local_24 = local_24 + 1;
      }
      uVar7 = 0x41010002;
    }
    else {
      FUN_5f7150c4(this,param_1,param_4,(char)uVar3);
      uVar7 = 0;
    }
    iVar9 = *(int *)((int)this + 0x8640);
    iVar2 = *(int *)(*(int *)((int)this + 0x8640) + 0x7c) -
            *(int *)(*(int *)((int)this + 0x8640) + 0x18);
    *(uint *)(iVar9 + 0x1c) = iVar2 + *(int *)(iVar9 + 0x1c) & *(int *)(iVar9 + 0xc) - 1U;
    *(int *)(iVar9 + 0x10) = *(int *)(iVar9 + 0x10) - iVar2;
    *(int *)(iVar9 + 0x18) = iVar2 + *(int *)(iVar9 + 0x18);
    if ((param_3 != (uint *)0x0) &&
       (((uVar7 & 0xc0000000) == 0 || ((uVar7 & 0xc0000000) == 0x40000000)))) {
      *param_3 = uVar11;
    }
    if ((char)uVar3 == '\0') {
      FUN_5f7156e0(this,'\0');
      if (((uVar7 & 0xc0000000) == 0) || ((uVar7 & 0xc0000000) == 0x40000000)) {
        uVar7 = 0x41010001;
      }
    }
    return uVar7;
  }
  return 0xc1010002;
}


