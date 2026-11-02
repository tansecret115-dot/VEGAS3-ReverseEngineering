/* Module: rv203260.dll
   Function: FUN_638a1390
   Address: 638a1390
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_638a1390(void *this,undefined4 *param_1,int *param_2)

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
    FUN_638a54d0((int)this);
  }
  piVar8 = param_2;
  if (*(int *)(*param_2 + 4) == 0x5649444f) {
    iVar7 = *(int *)(*param_2 + 8);
    if (iVar7 == 0x52563230) {
      iVar7 = param_2[1];
      if (*(int *)(iVar7 + 4) == 0x494d4147) {
        if (*(int *)(iVar7 + 8) != 0x59555632) goto LAB_638a15ad;
        pvVar2 = operator_new(0xbd2);
        if (pvVar2 != (void *)0x0) {
          local_8 = FUN_638a5e00(pvVar2,this);
          goto LAB_638a15ad;
        }
      }
      else {
        if ((*(int *)(iVar7 + 4) != 0x494d4742) || (*(int *)(iVar7 + 8) != 0x59555632))
        goto LAB_638a15ad;
        pvVar2 = operator_new(0xbd2);
        if (pvVar2 != (void *)0x0) {
          local_8 = FUN_638a5e00(pvVar2,this);
          goto LAB_638a15ad;
        }
      }
      local_8 = (undefined4 *)0x0;
    }
    else if (((((iVar7 == 0x52474256) || (iVar7 == 0x52474233)) || (iVar7 == 0x20524742)) ||
             (iVar7 == 0x59555632)) &&
            ((*(int *)(param_2[1] + 4) == 0x5649444f && (*(int *)(param_2[1] + 8) == 0x52563230))))
    {
      pvVar2 = operator_new(0x2ac);
      if (pvVar2 == (void *)0x0) {
        local_8 = (undefined4 *)0x0;
      }
      else {
        local_8 = FUN_638a89a0(pvVar2,this);
      }
      if (*(int *)((int)this + 0x366) == 0) {
        uVar11 = 2;
        this_00 = FUN_638a1040();
        pcVar3 = (char *)FUN_638aeee0(this_00,uVar11);
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
        pcVar3 = s_codec_log_638b43e4;
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
        pFVar4 = fopen(local_110,&DAT_638b43e0);
        *(FILE **)((int)this + 0x366) = pFVar4;
        piVar8 = param_2;
        if (pFVar4 != (FILE *)0x0) {
          fclose(pFVar4);
          pFVar4 = fopen(local_110,&DAT_638b43dc);
          *(FILE **)((int)this + 0x366) = pFVar4;
          piVar8 = param_2;
          if (pFVar4 != (FILE *)0x0) {
            fprintf(pFVar4,s__________________________________638b43a0);
            fprintf(*(FILE **)((int)this + 0x366),s_New_Encode_638b4368);
            fprintf(*(FILE **)((int)this + 0x366),s__________________________________638b4330);
            piVar8 = param_2;
          }
        }
      }
    }
  }
LAB_638a15ad:
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


