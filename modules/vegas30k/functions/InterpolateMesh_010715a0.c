/* Module: vegas30k.dll
   Function: InterpolateMesh
   Address: 010715a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* private: int __thiscall CMeshWarp::InterpolateMesh(struct tWARP_MESH *,struct tWARP_MESH *,struct
   tWARP_MESH *,double) */

int __thiscall
CMeshWarp::InterpolateMesh
          (CMeshWarp *this,tWARP_MESH *param_1,tWARP_MESH *param_2,tWARP_MESH *param_3,
          double param_4)

{
  double dVar1;
  tWARP_MESH *ptVar2;
  tWARP_MESH *ptVar3;
  tWARP_MESH *ptVar4;
  tWARP_MESH *ptVar5;
  tWARP_MESH *ptVar6;
  int iVar7;
  int in_stack_00000010;
  
                    /* 0x715a0  120  ?InterpolateMesh@CMeshWarp@@AAEHPAUtWARP_MESH@@00N@Z */
  if (((param_1 != (tWARP_MESH *)0x0) && (param_2 != (tWARP_MESH *)0x0)) &&
     (param_3 != (tWARP_MESH *)0x0)) {
    dVar1 = (double)CONCAT44(param_4._0_4_,in_stack_00000010);
    in_stack_00000010 = 0;
    if (0 < *(int *)(param_1 + 0x8004)) {
      ptVar4 = param_2 + 4;
      ptVar6 = param_1;
      do {
        iVar7 = 0;
        if (0 < *(int *)(param_1 + 0x8000)) {
          ptVar2 = ptVar4;
          ptVar5 = ptVar6;
          do {
            iVar7 = iVar7 + 1;
            ptVar3 = ptVar2 + 0x200;
            *(float *)ptVar5 =
                 (*(float *)(ptVar5 + ((int)param_3 - (int)param_1)) - *(float *)(ptVar2 + -4)) *
                 (float)dVar1 + *(float *)(ptVar2 + -4);
            *(float *)(ptVar3 + (int)(param_1 + (-0x200 - (int)param_2))) =
                 (*(float *)(ptVar3 + (int)(param_3 + (-0x200 - (int)param_2))) - *(float *)ptVar2)
                 * (float)dVar1 + *(float *)ptVar2;
            ptVar2 = ptVar3;
            ptVar5 = ptVar5 + 0x200;
          } while (iVar7 < *(int *)(param_1 + 0x8000));
        }
        in_stack_00000010 = in_stack_00000010 + 1;
        ptVar6 = ptVar6 + 8;
        ptVar4 = ptVar4 + 8;
      } while (in_stack_00000010 < *(int *)(param_1 + 0x8004));
    }
    return 1;
  }
  return 0;
}


