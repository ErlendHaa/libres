/*
   Copyright (C) 2011  Statoil ASA, Norway.

   The file 'member_config.h' is part of ERT - Ensemble based Reservoir Tool.

   ERT is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   ERT is distributed in the hope that it will be useful, but WITHOUT ANY
   WARRANTY; without even the implied warranty of MERCHANTABILITY or
   FITNESS FOR A PARTICULAR PURPOSE.

   See the GNU General Public License at <http://www.gnu.org/licenses/gpl.html>
   for more details.
*/

#ifndef ERT_MEMBER_CONFIG_H
#define ERT_MEMBER_CONFIG_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <time.h>

#include <ert/util/subst_list.h>

#include <ert/sched/sched_file.h>

#include <ert/enkf/enkf_types.h>
#include <ert/enkf/ensemble_config.h>
#include <ert/enkf/ecl_config.h>
#include <ert/enkf/enkf_types.h>



typedef  struct member_config_struct member_config_type;

  const char               * member_config_get_jobname( const member_config_type * member_config );
  int                        member_config_get_iens( const member_config_type * member_config );
  const char *               member_config_update_jobname(member_config_type * member_config , const char * jobname_fmt , const subst_list_type * subst_list);
  const char *               member_config_update_eclbase(member_config_type * member_config , const ecl_config_type * ecl_config , const subst_list_type * subst_list);
  void                       member_config_free(member_config_type * member_config) ;
  const char *               member_config_get_eclbase( const member_config_type * member_config );
  const char *               member_config_get_casename( const member_config_type * member_config );


  member_config_type *       member_config_alloc(int iens ,
                                                 const char * casename ,
                                                 const ecl_config_type      * ecl_config        ,
                                                 const ensemble_config_type * ensemble_config);


#ifdef __cplusplus
}
#endif
#endif
