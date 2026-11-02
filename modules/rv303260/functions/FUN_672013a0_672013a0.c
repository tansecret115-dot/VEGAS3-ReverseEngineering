/* Module: rv303260.dll
   Function: FUN_672013a0
   Address: 672013a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_672013a0(void *this,undefined4 *param_1,int *param_2)

{
  char cVar1;
  void *pvVar2;
  undefined *this_00;
  char *pcVar3;
  FILE *pFVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  char *pcVar9;
  char *pcVar10;
  ushort uVar11;
  char local_110 [260];
  int local_c;
  undefined4 *local_8;
  
  *param_1 = 0;
  local_c = 0x67;
  local_8 = (undefined4 *)0x0;
  if (*(int *)((int)this + 0xe4) == 0) {
    FUN_672058a0((int)this);
  }
  piVar8 = param_2;
  if (*(int *)(*param_2 + 4) == 0x5649444f) {
    iVar7 = *(int *)(*param_2 + 8);
    if (iVar7 == 0x52563330) {
      iVar7 = param_2[1];
      if (*(int *)(iVar7 + 4) == 0x494d4147) {
        if (*(int *)(iVar7 + 8) != 0x59555632) goto LAB_672015bd;
        pvVar2 = operator_new(0xb72);
        if (pvVar2 != (void *)0x0) {
          local_8 = FUN_67206130(pvVar2,this);
          goto LAB_672015bd;
        }
      }
      else {
        if ((*(int *)(iVar7 + 4) != 0x494d4742) || (*(int *)(iVar7 + 8) != 0x59555632))
        goto LAB_672015bd;
        pvVar2 = operator_new(0xb72);
        if (pvVar2 != (void *)0x0) {
          local_8 = FUN_67206130(pvVar2,this);
          goto LAB_672015bd;
        }
      }
      local_8 = (undefined4 *)0x0;
    }
    else if (((((iVar7 == 0x52474256) || (iVar7 == 0x52474233)) || (iVar7 == 0x20524742)) ||
             (iVar7 == 0x59555632)) &&
            ((*(int *)(param_2[1] + 4) == 0x5649444f && (*(int *)(param_2[1] + 8) == 0x52563330))))
    {
      pvVar2 = operator_new(0x27b);
      if (pvVar2 == (void *)0x0) {
        local_8 = (undefined4 *)0x0;
      }
      else {
        local_8 = FUN_672089f0(pvVar2,this);
      }
      if (*(int *)((int)this + 0x372) == 0) {
        uVar11 = 2;
        this_00 = FUN_67201040();
        pcVar3 = (char *)FUN_6720e450(this_00,uVar11);
        if (pcVar3 == (char *)0x0) {
          local_110[0] = '\0';
        }
        else {
          uVar5 = 0xffffffff;
          do {
            pcVar10 = pcVar3;
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            pcVar10 = pcVar3 + 1;
            cVar1 = *pcVar3;
            pcVar3 = pcVar10;
          } while (cVar1 != '\0');
          uVar5 = ~uVar5;
          pcVar3 = pcVar10 + -uVar5;
          pcVar10 = local_110;
          for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined4 *)pcVar10 = *(undefined4 *)pcVar3;
            pcVar3 = pcVar3 + 4;
            pcVar10 = pcVar10 + 4;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pcVar10 = *pcVar3;
            pcVar3 = pcVar3 + 1;
            pcVar10 = pcVar10 + 1;
          }
        }
        uVar5 = 0xffffffff;
        pcVar3 = s_codec_log_672144e0;
        do {
          pcVar10 = pcVar3;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar10 = pcVar3 + 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar10;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5;
        iVar7 = -1;
        pcVar3 = local_110;
        do {
          pcVar9 = pcVar3;
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          pcVar9 = pcVar3 + 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar9;
        } while (cVar1 != '\0');
        pcVar3 = pcVar10 + -uVar5;
        pcVar10 = pcVar9 + -1;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar10 = *(undefined4 *)pcVar3;
          pcVar3 = pcVar3 + 4;
          pcVar10 = pcVar10 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar10 = *pcVar3;
          pcVar3 = pcVar3 + 1;
          pcVar10 = pcVar10 + 1;
        }
        pFVar4 = fopen(local_110,&DAT_672144dc);
        *(FILE **)((int)this + 0x372) = pFVar4;
        piVar8 = param_2;
        if (pFVar4 != (FILE *)0x0) {
          fclose(pFVar4);
          pFVar4 = fopen(local_110,&DAT_672144d8);
          *(FILE **)((int)this + 0x372) = pFVar4;
          piVar8 = param_2;
          if (pFVar4 != (FILE *)0x0) {
            fprintf(pFVar4,s__________________________________6721449c);
            fprintf(*(FILE **)((int)this + 0x372),s_New_Encode_67214464);
            fprintf(*(FILE **)((int)this + 0x372),s__________________________________6721442c);
            piVar8 = param_2;
          }
        }
      }
    }
  }
LAB_672015bd:
  if (local_8 != (undefined4 *)0x0) {
    param_2 = (int *)0x0;
    (**(code **)*local_8)(2,&param_2);
    if (param_2 != (int *)0x0) {
      *(uint *)((int)this + 0xf6) = (uint)*(ushort *)(*piVar8 + 0xc);
      *(uint *)((int)this + 0xfa) = (uint)*(ushort *)(*piVar8 + 0xe);
      local_c = (**(code **)(*param_2 + 0xc))(piVar8);
      if (local_c == 0) {
        *param_1 = param_2;
        *(int **)((int)this + (uint)*(ushort *)((int)this + 0xf4) * 4 + 8) = param_2;
        *(short *)((int)this + 0xf4) = *(short *)((int)this + 0xf4) + 1;
        return 0;
      }
      (**(code **)(*param_2 + 8))();
    }
  }
  return local_c;
}


