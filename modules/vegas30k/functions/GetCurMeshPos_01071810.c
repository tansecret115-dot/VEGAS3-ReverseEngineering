/* Module: vegas30k.dll
   Function: GetCurMeshPos
   Address: 01071810
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: long __thiscall CMeshWarp::GetCurMeshPos(struct tWARP_MESH *,int,double,long,int) */

long __thiscall
CMeshWarp::GetCurMeshPos
          (CMeshWarp *this,tWARP_MESH *param_1,int param_2,double param_3,long param_4,int param_5)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  tWARP_MESH *ptVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  int local_108;
  float local_100 [64];
  
                    /* 0x71810  80  ?GetCurMeshPos@CMeshWarp@@AAEJPAUtWARP_MESH@@HNJH@Z */
  if (param_5 == 0) {
    iVar7 = *(int *)(param_1 + 0x8004);
    iVar6 = param_2 * 0x200 + 4;
    iVar2 = 2;
  }
  else {
    iVar7 = *(int *)(param_1 + 0x8000);
    iVar6 = param_2 * 8;
    iVar2 = 0x80;
  }
  ptVar4 = param_1 + iVar6;
  local_100[0] = (float)param_2 / (float)(iVar7 + -1);
  iVar6 = 1;
  if (1 < iVar7 + 1) {
    pfVar3 = local_100;
    iVar5 = iVar7;
    do {
      pfVar3 = pfVar3 + 1;
      fVar1 = *(float *)ptVar4;
      ptVar4 = ptVar4 + iVar2 * 4;
      *pfVar3 = fVar1;
      iVar5 = iVar5 + -1;
      iVar6 = iVar7 + 1;
    } while (iVar5 != 0);
  }
  local_100[iVar6] = local_100[0];
  fVar8 = (float10)FUN_010718f0((float)param_3,local_100,iVar7 + 2);
  local_108 = SUB84((double)(fVar8 * (float10)param_4 + (float10)_DAT_011dbdd0),0);
  return local_108 + -0x80000000;
}


