/*
 * Copyright 2016 Canonical Ltd.
 *
 * This program is free software: you can redistribute it and/or modify it under
 * the terms of the GNU General Public License, version 3, as published by the
 * Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef LIBERTINE_SCOPE_FAKE_CONTAINER_H_
#define LIBERTINE_SCOPE_FAKE_CONTAINER_H_


#include "scope/apps/container.h"


/**
 * A Fake Libertine container.
 */
class FakeContainer
: public Container
{
public:
  explicit
  FakeContainer(std::string const& container_id);

  ~FakeContainer();
};

#endif /* LIBERTINE_SCOPE_FAKE_CONTAINER_H_ */
